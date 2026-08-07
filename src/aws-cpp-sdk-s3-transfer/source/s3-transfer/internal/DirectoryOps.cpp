/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-transfer/internal/DirectoryOps.h>
#include <aws/s3-transfer/internal/CrtOperations.h>
#include <aws/s3-transfer/internal/DirectoryTransferState.h>
#include <aws/s3-transfer/internal/HandleImpls.h>
#include <aws/s3-transfer/internal/NotifyListeners.h>
#include <aws/s3-transfer/internal/S3TransferManagerImpl.h>

#include <aws/core/client/AWSError.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/crt/Optional.h>
#include <aws/crt/s3/S3.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/model/ListObjectsV2Result.h>
#include <aws/s3/model/Object.h>

#include <cassert>
#include <cstdint>
#include <deque>
#include <future>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {
namespace Internal {

static const char* const DIRECTORY_OPS_LOG_TAG = "DirectoryOps";

namespace {

// One file to transfer: the S3 key and the local path, whichever direction derived which, plus its
// size in bytes (from the directory walk for upload, the listing for download) so the orchestrator
// can report byte progress alongside the file count.
struct WorkItem {
  Aws::String key;
  Aws::String localPath;
  uint64_t size = 0;
};

// Rewrite platform separators as '/', per the SEP key-derivation rule. A no-op on POSIX.
Aws::String ToForwardSlashes(const Aws::String& path) {
  Aws::String out = path;
  const char platformSep = Aws::FileSystem::PATH_DELIM;
  if (platformSep != '/') {
    for (char& c : out) {
      if (c == platformSep) {
        c = '/';
      }
    }
  }
  return out;
}

// Derive an object key from a file's path relative to the source directory, per the SEP: take the
// relative path, strip leading separators, normalize separators to '/', then join under the prefix
// with exactly one '/'.
Aws::String DeriveObjectKey(const Aws::String& prefix, const Aws::String& relativePath) {
  Aws::String rel = ToForwardSlashes(relativePath);
  size_t firstKeep = 0;
  while (firstKeep < rel.size() && rel[firstKeep] == '/') {
    ++firstKeep;
  }
  rel.erase(0, firstKeep);
  if (prefix.empty()) {
    return rel;
  }
  if (prefix.back() == '/') {
    return prefix + rel;
  }
  return prefix + "/" + rel;
}

// Derive the local destination path for an object key, per the SEP: strip the prefix the caller
// listed under, then map '/' onto the platform separator under the destination directory.
//
// Returns false when the key maps to nothing to write — it was the prefix itself (a folder marker)
// — or when it would escape the destination directory. The caller distinguishes the two.
bool DeriveLocalPath(const Aws::String& destinationDirectory, const Aws::String& prefix,
                     const Aws::String& key, Aws::String& outPath) {
  Aws::String relative = key;
  if (!prefix.empty() && relative.compare(0, prefix.size(), prefix) == 0) {
    relative = relative.substr(prefix.size());
  }
  size_t firstKeep = 0;
  while (firstKeep < relative.size() && relative[firstKeep] == '/') {
    ++firstKeep;
  }
  relative.erase(0, firstKeep);
  if (relative.empty()) {
    return false;
  }

  // Reject anything that could climb out of the destination before touching the disk. Checking each
  // '/'-delimited segment catches "..", absolute-looking keys, and empty segments on any platform.
  size_t start = 0;
  while (start <= relative.size()) {
    const size_t slash = relative.find('/', start);
    const size_t end = (slash == Aws::String::npos) ? relative.size() : slash;
    const Aws::String segment = relative.substr(start, end - start);
    if (segment == ".." || segment == "." || segment.empty()) {
      return false;
    }
    if (slash == Aws::String::npos) {
      break;
    }
    start = slash + 1;
  }

  Aws::String local = destinationDirectory;
  if (!local.empty() && local.back() != Aws::FileSystem::PATH_DELIM) {
    local += Aws::FileSystem::PATH_DELIM;
  }
  for (char c : relative) {
    local += (c == '/') ? Aws::FileSystem::PATH_DELIM : c;
  }
  outPath = std::move(local);
  return true;
}

// Create the parent directory of filePath, and any missing directories above it.
bool EnsureParentDirectory(const Aws::String& filePath) {
  const size_t slash = filePath.find_last_of(Aws::FileSystem::PATH_DELIM);
  if (slash == Aws::String::npos) {
    return true;  // no directory component
  }
  const Aws::String parent = filePath.substr(0, slash);
  if (parent.empty()) {
    return true;
  }
  return Aws::FileSystem::CreateDirectoryIfNotExists(parent.c_str(), /*createParentDirs*/ true);
}

/**
 * The tallies an orchestrator accumulates, and why it stopped. Only the orchestrator task touches
 * these, so they need no synchronization; the shared state carries only the child-handle map.
 */
struct Tally {
  uint64_t succeeded = 0;
  uint64_t failed = 0;
  // Bytes across every file attempted (succeeded or failed), summed from each item's known size as
  // it is harvested. Reported as the snapshot's transferredBytes.
  uint64_t transferredBytes = 0;
  // Set when the failure policy or a cancel ended the operation before every file was attempted.
  bool stopped = false;

  uint64_t Attempted() const { return succeeded + failed; }
};

// Hand one discovered item to the orchestrator for dispatch. Returns false once the operation should
// stop, which is the enumerator's cue to stop walking or paging.
using SubmitSink = std::function<bool(WorkItem)>;

// Report a per-file failure the enumerator detected itself, before any transfer existed — a key that
// would escape the destination, a directory that could not be created. Returns false when the
// failure policy says to stop.
using LocalFailureSink =
    std::function<bool(const WorkItem& item, const char* exceptionName, const Aws::String& message)>;

// Empty on success; otherwise the error that failed the whole operation, which no failure policy can
// waive. Reports the final item count through totalItems and the summed byte total through
// totalBytes, unless it was cut short.
using EnumerateResult = Aws::Crt::Optional<Aws::Client::AWSError<Aws::S3::S3Errors>>;

/**
 * Runs one directory operation to completion: dispatches each item through the single-file
 * dispatcher, keeps at most maxConcurrency in flight, harvests each outcome, consults the failure
 * policy, and reports file-count progress. Shared by both directions — only how work is enumerated
 * and how a per-file request is built differ, and those arrive as callables.
 *
 * `enumerate` hands items over one at a time through the sink it is given, and decides for itself
 * whether to collect the work list first or stream it: the upload walk is local and cheap so it
 * collects, which makes the totals known before the first dispatch, while the download lists pages
 * over the network and streams so transfers overlap the remaining pages. It reports the final file
 * count through totalItems and the summed byte total through totalBytes, and returns an error to
 * fail the whole operation (a traversal or listing failure), which no failure policy can waive; the
 * policy governs per-file failures only.
 *
 * A totalItems/totalBytes of nothing means that total is not yet known, which snapshots report as a
 * zero total with a false known-total flag. Each WorkItem carries its own size, summed into the
 * tally as files are attempted so the snapshot's transferredBytes climbs alongside the file count.
 */
template <typename StateT, typename ListenerT, typename SnapshotT, typename ResponseT,
          typename ChildHandleT, typename ChildOutcomeT, typename DispatchFn, typename EnumerateFn>
void RunDirectoryTransfer(const std::shared_ptr<StateT>& state, uint64_t maxConcurrency,
                          const std::shared_ptr<FailurePolicy>& policy, DispatchFn&& dispatch,
                          EnumerateFn&& enumerate) {
  // A zero cap would stall the window, so treat it as one.
  const uint64_t windowSize = maxConcurrency == 0 ? 1 : maxConcurrency;

  Tally tally;
  // Known once enumeration finishes; until then snapshots report the totals as not-yet-set. The
  // byte total is only meaningful when every item's size is known, which both enumerators supply.
  Aws::Crt::Optional<uint64_t> totalItems;
  Aws::Crt::Optional<uint64_t> totalBytes;

  struct InFlight {
    uint64_t id;
    WorkItem item;
    std::future<ChildOutcomeT> future;
  };
  std::deque<InFlight> inFlight;
  uint64_t nextId = 0;

  // Build a progress snapshot from the running tally and whatever totals enumeration has settled.
  auto makeSnapshot = [&]() {
    return SnapshotT(tally.transferredBytes, totalBytes ? *totalBytes : 0, nullptr, totalBytes.has_value(),
                     tally.Attempted(), totalItems ? *totalItems : 0, totalItems.has_value());
  };

  NotifyListeners(state, &ListenerT::OnTransferInitiated, SnapshotT(0, 0, nullptr, false, 0, 0, false));

  // Harvest the oldest in-flight transfer, folding its outcome into the tally and firing progress.
  auto harvestOne = [&]() {
    WorkItem item = std::move(inFlight.front().item);
    std::future<ChildOutcomeT> future = std::move(inFlight.front().future);
    const uint64_t id = inFlight.front().id;
    inFlight.pop_front();
    // Its outcome is in hand, so there is nothing left for a cancel to reach.
    state->RemoveInFlight(id);

    ChildOutcomeT outcome = future.get();
    // Count the file's bytes as transferred once it has been attempted, mirroring the file tally
    // which counts both successes and failures.
    tally.transferredBytes += item.size;
    if (outcome.IsSuccess()) {
      ++tally.succeeded;
    } else {
      ++tally.failed;
      const FailureContext context{item.key, item.localPath, outcome.GetError()};
      // A null policy is the documented default: stop on the first failure.
      if (!policy || !policy->ShouldContinue(context)) {
        tally.stopped = true;
      }
    }
    NotifyListeners(state, &ListenerT::OnBytesTransferred, makeSnapshot());
  };

  // Record a per-file failure the orchestrator itself detected, before any transfer was dispatched
  // (a key that escapes the destination, a directory that cannot be created). Returns false when the
  // policy says to stop.
  const LocalFailureSink recordLocalFailure = [&](const WorkItem& item, const char* exceptionName,
                                                  const Aws::String& message) -> bool {
    ++tally.failed;
    // Counted as attempted on the byte axis too, so the two axes stay consistent (both count every
    // file the operation took a swing at, successful or not).
    tally.transferredBytes += item.size;
    const FailureContext context{
        item.key, item.localPath,
        Aws::Client::AWSError<Aws::S3::S3Errors>(Aws::S3::S3Errors::UNKNOWN, exceptionName, message, false)};
    if (!policy || !policy->ShouldContinue(context)) {
      tally.stopped = true;
      return false;
    }
    NotifyListeners(state, &ListenerT::OnBytesTransferred, makeSnapshot());
    return true;
  };

  // Dispatch one item and slide the window forward. Returns false once the operation should stop, so
  // the enumerator can break out.
  const SubmitSink submit = [&](WorkItem item) -> bool {
    if (tally.stopped || state->canceled.load()) {
      tally.stopped = true;
      return false;
    }

    const uint64_t id = nextId++;
    ChildHandleT handle = dispatch(item);
    std::future<ChildOutcomeT> future = handle.CompletionFuture();
    // The state owns the handle so a Cancel() can reach it (and cancels it immediately if one
    // already landed); the future stays here to harvest.
    state->AddInFlight(id, std::move(handle));
    inFlight.push_back(InFlight{id, std::move(item), std::move(future)});

    // Keep the window bounded: once it is full, drain before accepting more.
    while (!tally.stopped && inFlight.size() >= windowSize) {
      harvestOne();
    }
    return !tally.stopped && !state->canceled.load();
  };

  // Enumerate and dispatch. A failure here ends the whole operation regardless of the policy.
  Aws::Crt::Optional<Aws::Client::AWSError<Aws::S3::S3Errors>> enumerateError =
      enumerate(submit, recordLocalFailure, totalItems, totalBytes, tally);

  // Drain whatever is still in flight. If we are stopping early, cancel first so the drain does not
  // wait out transfers whose results no longer matter — but still harvest every future, since each
  // child's promise has to be consumed.
  const bool stoppingEarly = tally.stopped || state->canceled.load() || enumerateError.has_value();
  if (stoppingEarly) {
    state->CancelAll();
  }
  while (!inFlight.empty()) {
    if (stoppingEarly) {
      std::future<ChildOutcomeT> future = std::move(inFlight.front().future);
      const uint64_t id = inFlight.front().id;
      inFlight.pop_front();
      state->RemoveInFlight(id);
      ChildOutcomeT outcome = future.get();
      if (outcome.IsSuccess()) {
        ++tally.succeeded;
      } else {
        ++tally.failed;
      }
    } else {
      harvestOne();
    }
  }

  // An enumeration failure surfaces its own error; a cancel or a stop-on-failure policy fails the
  // operation; otherwise it succeeds with the tally, which may still count failures if the policy
  // waived them.
  const bool canceled = state->canceled.load();
  const bool operationFailed = enumerateError.has_value() || canceled || tally.stopped;

  // Both totals are settled at the end: fall back to what was attempted if enumeration never
  // reported one (it was cut short), and mark both axes known.
  const SnapshotT finalSnapshot(tally.transferredBytes, totalBytes ? *totalBytes : tally.transferredBytes,
                                nullptr, true, tally.Attempted(),
                                totalItems ? *totalItems : tally.Attempted(), true);
  NotifyListeners(state, operationFailed ? &ListenerT::OnTransferFailed : &ListenerT::OnTransferComplete,
                  finalSnapshot);

  if (enumerateError) {
    state->promise.set_value(enumerateError.value());
  } else if (operationFailed) {
    state->promise.set_value(Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::UNKNOWN, canceled ? "RequestCanceled" : "DirectoryTransferFailed",
        canceled ? "Directory transfer was canceled." : "One or more files failed to transfer.", false));
  } else {
    state->promise.set_value(ResponseT(tally.succeeded, tally.failed));
  }
}

}  // namespace

UploadDirectoryHandle DirectoryOps::UploadDirectory(S3TransferManagerImpl& impl,
                                                    const UploadDirectoryRequest& request) {
  auto state = Aws::MakeShared<UploadDirectoryTransferState>(DIRECTORY_OPS_LOG_TAG, request);

  auto handleImpl = Aws::MakeUnique<UploadDirectoryHandleImpl>(DIRECTORY_OPS_LOG_TAG);
  handleImpl->future = state->promise.get_future();
  handleImpl->state = state;

  // Fail fast if the manager never initialized; the error surfaces via the handle's future. Checked
  // here rather than left to the per-file dispatches so the customer gets the initialization error
  // itself instead of a tally of files that each failed for that reason.
  if (!impl.IsInitialized()) {
    NotifyListeners(state, &UploadDirectoryProgressListener::OnTransferInitiated,
                    UploadDirectoryProgressSnapshot(0, 0, nullptr, false, 0, 0, false));
    NotifyListeners(state, &UploadDirectoryProgressListener::OnTransferFailed,
                    UploadDirectoryProgressSnapshot(0, 0, nullptr, false, 0, 0, false));
    state->promise.set_value(UploadDirectoryOutcome(impl.GetInitializationError()));
    return UploadDirectoryHandle(std::move(handleImpl));
  }

  // Walk plus fan-out run on the executor so this call returns immediately. The state is held by
  // shared_ptr so the task keeps it alive even if the customer drops the handle; `impl` outlives it
  // because the manager cannot be destroyed while a transfer it owns is in flight.
  const bool submitted = impl.GetExecutor()->Submit([&impl, state]() {
    const UploadDirectoryRequest& request = state->request;

    RunDirectoryTransfer<UploadDirectoryTransferState, UploadDirectoryProgressListener,
                         UploadDirectoryProgressSnapshot, UploadDirectoryResponse, UploadHandle,
                         UploadOutcome>(
        state, request.GetMaxConcurrency(), request.GetFailurePolicy(),
        // Dispatch one file: build the per-file request, run it through the customer's transformer,
        // and hand it to the single-file upload path.
        [&impl, &request](const WorkItem& item) {
          UploadRequest fileRequest(request.GetBucket(), item.key, item.localPath);
          if (request.GetUploadRequestTransformer()) {
            request.GetUploadRequestTransformer()(fileRequest);
          }
          return CrtOperations::DispatchUpload(impl, fileRequest);
        },
        // Enumerate: walk the source directory, then dispatch what it found.
        //
        // Unlike the download side this collects the whole work list before dispatching anything.
        // The walk is local and cheap, and doing it up front means totalFiles is known before the
        // first file goes out, so every progress snapshot can report a real "N of M" instead of
        // counting up against an unknown total.
        [&request](const SubmitSink& submit, const LocalFailureSink& /*recordLocalFailure*/,
                   Aws::Crt::Optional<uint64_t>& totalItems, Aws::Crt::Optional<uint64_t>& totalBytes,
                   Tally& /*tally*/) -> EnumerateResult {
          Aws::Crt::S3::DirectoryTraversalOptions options;
          options.followSymbolicLinks = request.GetFollowSymbolicLinks();
          options.maxDepth = request.GetMaxDepth();

          Aws::Vector<WorkItem> work;
          uint64_t bytes = 0;
          const int traversalRc = Aws::Crt::S3::TraverseDirectory(
              Aws::Crt::String(request.GetSourceDirectory().c_str()), options,
              [&](const Aws::Crt::S3::DirectoryEntry& entry) -> bool {
                // Only regular files become objects. Directories — including a followed
                // symlink-to-directory, which the walker also flags as one — are structure, not
                // content. This is also why an empty subdirectory produces no object, as the SEP
                // requires.
                if (!entry.IsFile() || entry.IsDirectory()) {
                  return true;
                }
                WorkItem item;
                item.key = DeriveObjectKey(request.GetS3Prefix(), Aws::String(entry.relativePath.c_str()));
                item.localPath = Aws::String(entry.path.c_str());
                // The walker already stat'd the file, so its size rides along for free — no extra
                // filesystem call to total the upload's bytes.
                item.size = entry.fileSize > 0 ? static_cast<uint64_t>(entry.fileSize) : 0;
                bytes += item.size;
                work.push_back(std::move(item));
                return true;
              });

          if (traversalRc != AWS_OP_SUCCESS) {
            return Aws::Client::AWSError<Aws::S3::S3Errors>(
                Aws::S3::S3Errors::UNKNOWN, "DirectoryTraversalFailure",
                "Failed to traverse source directory '" + request.GetSourceDirectory() + "'", false);
          }

          // The walk is complete, so both totals are known before the first file goes out.
          totalItems = static_cast<uint64_t>(work.size());
          totalBytes = bytes;
          for (WorkItem& item : work) {
            // False means a cancel or the failure policy ended things; stop dispatching the rest.
            if (!submit(std::move(item))) {
              break;
            }
          }
          return {};
        });
  });

  if (!submitted) {
    NotifyListeners(state, &UploadDirectoryProgressListener::OnTransferInitiated,
                    UploadDirectoryProgressSnapshot(0, 0, nullptr, false, 0, 0, false));
    NotifyListeners(state, &UploadDirectoryProgressListener::OnTransferFailed,
                    UploadDirectoryProgressSnapshot(0, 0, nullptr, false, 0, 0, false));
    state->promise.set_value(UploadDirectoryOutcome(Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INTERNAL_FAILURE, "INTERNAL_FAILURE",
        "Failed to submit the directory upload to the executor.", false)));
  }

  return UploadDirectoryHandle(std::move(handleImpl));
}

DownloadDirectoryHandle DirectoryOps::DownloadDirectory(S3TransferManagerImpl& impl,
                                                        const DownloadDirectoryRequest& request) {
  auto state = Aws::MakeShared<DownloadDirectoryTransferState>(DIRECTORY_OPS_LOG_TAG, request);

  auto handleImpl = Aws::MakeUnique<DownloadDirectoryHandleImpl>(DIRECTORY_OPS_LOG_TAG);
  handleImpl->future = state->promise.get_future();
  handleImpl->state = state;

  // See UploadDirectory for why the initialization check lives here.
  if (!impl.IsInitialized()) {
    NotifyListeners(state, &DownloadDirectoryProgressListener::OnTransferInitiated,
                    DownloadDirectoryProgressSnapshot(0, 0, nullptr, false, 0, 0, false));
    NotifyListeners(state, &DownloadDirectoryProgressListener::OnTransferFailed,
                    DownloadDirectoryProgressSnapshot(0, 0, nullptr, false, 0, 0, false));
    state->promise.set_value(DownloadDirectoryOutcome(impl.GetInitializationError()));
    return DownloadDirectoryHandle(std::move(handleImpl));
  }

  const bool submitted = impl.GetExecutor()->Submit([&impl, state]() {
    const DownloadDirectoryRequest& request = state->request;

    RunDirectoryTransfer<DownloadDirectoryTransferState, DownloadDirectoryProgressListener,
                         DownloadDirectoryProgressSnapshot, DownloadDirectoryResponse, DownloadHandle,
                         DownloadOutcome>(
        state, request.GetMaxConcurrency(), request.GetFailurePolicy(),
        [&impl, &request](const WorkItem& item) {
          DownloadRequest fileRequest(request.GetBucket(), item.key, item.localPath);
          if (request.GetDownloadRequestTransformer()) {
            request.GetDownloadRequestTransformer()(fileRequest);
          }
          return CrtOperations::DispatchDownload(impl, fileRequest);
        },
        // Enumerate: page through the listing, submitting each object as it is discovered so the
        // transfers overlap the remaining pages.
        [&impl, &request, &state](const SubmitSink& submit, const LocalFailureSink& recordLocalFailure,
                                  Aws::Crt::Optional<uint64_t>& totalItems,
                                  Aws::Crt::Optional<uint64_t>& totalBytes, Tally& tally)
            -> EnumerateResult {
          // Create the destination root up front: a failure here means no file can land, so it fails
          // the operation rather than counting against any one object.
          if (!Aws::FileSystem::CreateDirectoryIfNotExists(request.GetDestinationDirectory().c_str(),
                                                           /*createParentDirs*/ true)) {
            return Aws::Client::AWSError<Aws::S3::S3Errors>(
                Aws::S3::S3Errors::UNKNOWN, "CreateDirectoryFailure",
                "Failed to create destination directory '" + request.GetDestinationDirectory() + "'", false);
          }

          const Aws::String& prefix = request.GetS3Prefix();
          uint64_t discovered = 0;
          uint64_t discoveredBytes = 0;
          Aws::String continuationToken;
          bool keepGoing = true;

          while (keepGoing) {
            if (state->canceled.load()) {
              tally.stopped = true;
              break;
            }
            auto pageOutcome =
                CrtOperations::DispatchListObjectsV2(impl, request.GetBucket(), prefix, continuationToken);
            if (!pageOutcome.IsSuccess()) {
              return pageOutcome.GetError();
            }
            const Aws::S3::Model::ListObjectsV2Result& page = pageOutcome.GetResult();

            for (const Aws::S3::Model::Object& object : page.GetContents()) {
              if (tally.stopped || state->canceled.load()) {
                tally.stopped = true;
                keepGoing = false;
                break;
              }
              const Aws::String& key = object.GetKey();

              // Skip placeholder folder objects: a zero-byte key ending in '/'.
              if (!key.empty() && key.back() == '/' && object.GetSize() == 0) {
                continue;
              }
              if (request.GetFilter() && !request.GetFilter()(object)) {
                continue;
              }

              WorkItem item;
              item.key = key;
              // The listing already carries each object's size, so the download's byte total needs
              // no HeadObject calls.
              item.size = object.GetSize() > 0 ? static_cast<uint64_t>(object.GetSize()) : 0;
              if (!DeriveLocalPath(request.GetDestinationDirectory(), prefix, key, item.localPath)) {
                // The prefix folder itself maps to nothing to write; skip it silently. Anything
                // longer than the prefix that still failed to map would have escaped the destination
                // directory, which counts as a per-file failure.
                if (key.size() > prefix.size()) {
                  ++discovered;
                  discoveredBytes += item.size;
                  if (!recordLocalFailure(item, "PathTraversalRejected",
                                          "Object key '" + key + "' maps outside the destination directory.")) {
                    keepGoing = false;
                    break;
                  }
                }
                continue;
              }

              ++discovered;
              discoveredBytes += item.size;
              if (!EnsureParentDirectory(item.localPath)) {
                if (!recordLocalFailure(item, "CreateDirectoryFailure",
                                        "Failed to create local directory for '" + item.localPath + "'")) {
                  keepGoing = false;
                  break;
                }
                continue;
              }

              if (!submit(std::move(item))) {
                keepGoing = false;
                break;
              }
            }

            if (!keepGoing) {
              break;
            }
            continuationToken = page.GetIsTruncated() ? page.GetNextContinuationToken() : Aws::String();
            keepGoing = !continuationToken.empty();
          }

          // The listing is only fully enumerated if we were not cut short.
          if (!tally.stopped) {
            totalItems = discovered;
            totalBytes = discoveredBytes;
          }
          return {};
        });
  });

  if (!submitted) {
    NotifyListeners(state, &DownloadDirectoryProgressListener::OnTransferInitiated,
                    DownloadDirectoryProgressSnapshot(0, 0, nullptr, false, 0, 0, false));
    NotifyListeners(state, &DownloadDirectoryProgressListener::OnTransferFailed,
                    DownloadDirectoryProgressSnapshot(0, 0, nullptr, false, 0, 0, false));
    state->promise.set_value(DownloadDirectoryOutcome(Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INTERNAL_FAILURE, "INTERNAL_FAILURE",
        "Failed to submit the directory download to the executor.", false)));
  }

  return DownloadDirectoryHandle(std::move(handleImpl));
}

}  // namespace Internal
}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
