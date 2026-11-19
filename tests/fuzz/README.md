# Schema serde fuzz tests

Coverage-guided fuzzing for the schema-based serde in `aws-cpp-sdk-core`
(`src/aws-cpp-sdk-core/{include,source}/smithy/client/schema/`), built on
[google/fuzztest](https://github.com/google/fuzztest).

FuzzTest requires Linux and Clang, so everything runs in a container. `tools/scripts/run_fuzz.sh` builds the
image, configures a core-only static build with `-DENABLE_SCHEMA_FUZZ_TESTS=ON`, and runs
`aws-cpp-sdk-schema-fuzz-tests`. The build tree lives in the Docker volume `aws-sdk-cpp-schema-fuzz-build`.

## Commands

| Command | What it does |
|---|---|
| `tools/scripts/run_fuzz.sh unit [gtest-args]` | Unit-test mode: every target replays its seeds, `corpus/` and `findings/`, plus a short random burst; plain gtests run too. ASan + UBSan (`SCHEMA_FUZZ_UNIT_SANITIZERS`, on by default), no coverage instrumentation. |
| `tools/scripts/run_fuzz.sh fuzz <Suite.Test> <duration>` | One target, coverage-guided, ASan + UBSan, e.g. `10m`. |
| `tools/scripts/run_fuzz.sh campaign [duration] [jobs]` | Every `FUZZ_TEST` in parallel, `<duration>` each (default `30m`); see [Campaign](#campaign). |
| `tools/scripts/run_fuzz.sh repro <Suite.Test> <repo-path>` | Runs one raw byte file as the only seed, under sanitizers. Byte targets only; typed targets are rejected with a pointer to `replay`. |
| `tools/scripts/run_fuzz.sh replay <Suite.Test> <repo-path>` | Replays a FuzzTest reproducer file with `FUZZTEST_REPLAY=/src/<repo-path>` against the fuzzing-mode binary, under sanitizers. Works for every target. |

Example: `run_fuzz.sh unit --gtest_filter='JsonCodecFuzz.*'`.

`fuzz`, `campaign`, `repro` and `replay` pass `--stack_limit_kb=2304`; all but `repro` also pass
`--time_limit_per_input=10s`. Durations are `<number><s|m|h>`; anything else is a usage error. Arguments
reach the container as positional parameters, so spaces, globs and quotes in gtest filters survive. On
macOS these modes run under `caffeinate -i`, because host idle sleep freezes the container clock and
FuzzTest then reports a false per-input timeout (closing the lid on battery still sleeps the host).

FuzzTest's default stack limit (128 KiB) is too small for the seeds, which nest `MAX_NESTING_DEPTH` deep, so the script
raises it to 2304 KiB. A "stack limit exceeded" failure therefore means the stack used per nesting level has grown.

`SCHEMA_FUZZ_LOCALE` sets `LC_NUMERIC` before the SDK starts, e.g. `SCHEMA_FUZZ_LOCALE=de_DE.UTF-8 run_fuzz.sh campaign`
runs every target with a ',' decimal point. The image generates `de_DE.UTF-8`.

On a Linux host the container runs as the calling user, so files it writes under `tests/fuzz/reproducers/` stay yours;
the first such run hands an existing root-owned build volume over to that user.

### `replay` versus `repro`

Reproducer files for failures found by `fuzz` and `campaign` are written to `tests/fuzz/reproducers/`
(gitignored) in FuzzTest's serialized format.

- `replay <Suite.Test> <file>` feeds that file back through FuzzTest, so it reproduces any target, byte
  or typed. Use it for everything under `reproducers/`.
- `repro <Suite.Test> <file>` sets `SCHEMA_FUZZ_REPRO_FILE`, which makes a raw byte file the only seed of
  a byte target. Typed targets (`RoundTripsTypedValues`, `SerializeRequestIsWellFormedForm`,
  `DocumentRoundTrips`, `NonJsonCodecsRejectDocuments`, `GeneratedValuesAre...`) never read it, so
  `repro` refuses them rather than silently testing nothing. The byte targets are listed once, in
  `BYTE_TARGET_PATTERN` in `run_fuzz.sh`.

## Campaign

`run_fuzz.sh campaign [duration] [jobs]` builds once, lists the targets with `--list_fuzz_tests`, and
runs one process per target in a job pool, so a finding in one target does not stop the others.

- Each process gets `--rss_limit_mb` (default 2560, override with `FUZZ_CAMPAIGN_RSS_MB`),
  `--time_limit_per_input=10s` and `--stack_limit_kb=2304`. FuzzTest itself has no RSS limit by default,
  and an ASan build's memory grows with its in-process corpus, so the cap protects the container rather
  than looking for leaks.
- Jobs default to the smaller of `min(nproc-2, 8)` and the number of processes whose RSS cap fits in 85% of
  the container's memory, computed inside the container. Wall-clock time is roughly
  `ceil(targets / jobs) x duration`; give the container more memory to run more jobs. An explicit `jobs`
  above what fits is honoured with a warning.
- Logs go to `/build/campaign/<timestamp>/<Suite.Test>.log` in the build volume. Each target writes
  its reproducers to `tests/fuzz/reproducers/<Suite.Test>/`; a failed target's log is copied beside them as
  `campaign.log`.
- The summary prints one PASS or FAIL line per target with corpus size, edges covered and runs per
  second. The exit status is non-zero if any target failed.
- The corpus is not persisted between runs: only Centipede writes `--corpus_database`, and this build
  runs FuzzTest in-process. Inputs worth keeping go under `corpus/`.
- `RSS limit exceeded` after many minutes is usually fuzzer-state growth, not a codec bug. Triage it by
  replaying the reproducer (`run_fuzz.sh replay ...`) and checking the peak RSS of that single input; only a
  single input that needs hundreds of MB is a finding.
- A 20-second smoke run: `run_fuzz.sh campaign 20s 8`.

## Targets and oracles

| Target | Input | Passes when |
|---|---|---|
| `{Json,Cbor,Xml}CodecFuzz.DeserializeNeverCrashes` | arbitrary bytes | deserializing against every fuzz schema returns, with no sanitizer fault and no hang |
| `{Json,Cbor,Xml}CodecFuzz.ReserializeIsStable` | arbitrary bytes | anything we can read, we can write and read back unchanged; after that first write the output is a fixed point (writing what we read back gives the same bytes) |
| `{Json,Cbor,Xml}CodecFuzz.RoundTripsTypedValues` | choice tape | a generated value survives serialize, then deserialize |
| `QueryProtocolFuzz.SerializeRequestIsWellFormedForm` | choice tape | output is valid form encoding with one `=` per field, no duplicate keys, and exactly one `Action` and one `Version` with the expected values; its other fields are exactly the ones the value implies, each under the name the awsQuery or ec2Query rules give it (`QueryProtocolOracle.*` pins those names), every string, map key, integer, boolean and blob field holds its exact decoded text, every floating-point field parses back (in the C locale) to the same number, and every timestamp to the same instant (whole seconds for date-time and http-date). `QueryProtocolOracle.*` also runs the seed tapes under `de_DE.UTF-8`. An empty awsQuery list is a bare key; an empty ec2Query list and any empty map are omitted |
| `QueryProtocolFuzz.DeserializeResponseNeverCrashes` | arbitrary bytes | as above, through both query protocols; seeds come bare and inside the `<FuzzOperationResult>` wrapper |
| `QueryProtocolFuzz.DeserializeResponseIsStable` | arbitrary bytes | two reads of the same body agree: awsQuery with the `<Action>Result` wrapper, ec2Query bare |
| `JsonDocumentFuzz.ReadDocumentNeverCrashes` | arbitrary bytes | `ReadDocument` returns, in a struct member and at top level |
| `JsonReferenceFuzz.JsonMatchesReference` | arbitrary bytes | for every fuzz schema, the JSON codec accepts exactly the payloads the CRT's JSON parser parses and reads as acceptable, and reads the same value tree; see [Reference parsers](#reference-parsers) |
| `XmlReferenceFuzz.XmlMatchesReference` | arbitrary bytes | the same for the XML codec against tinyxml2 |
| `QueryProtocolFuzz.DeserializeResponseMatchesReference` | arbitrary bytes | the same for awsQuery responses, entering the `<FuzzOperationResult>` wrapper when the root has one |
| `JsonReferenceFuzz.JsonSerializedOutputMatchesReference` | choice tape | the CRT's JSON parser accepts what the JSON codec writes for a generated value and reads it back as that value |
| `XmlReferenceFuzz.XmlSerializedOutputMatchesReference` | choice tape | the same for the XML codec against tinyxml2 |
| `JsonDocumentFuzz.DocumentRoundTrips` | choice tape | a generated document survives write, then read |
| `JsonDocumentFuzz.NonJsonCodecsRejectDocuments` | choice tape | CBOR, XML and query refuse to serialize a document |
| `FuzzDomains.GeneratedValuesAreDeterministicBoundedAndJsonSerializable` | choice tape | the generator is deterministic, depth-bounded, and always JSON-serializable |

Plain gtests that also run in `unit` mode: `FuzzValue.*`, `DynamicStruct.*`, `FuzzSchemas.*`,
`FuzzDomains.*` (non-fuzz), `CodecRegression.*`, `ReferenceParity.*`, `QueryProtocolOracle.*`, `ScalarText.*`.

Byte targets take a `std::string` of up to `MAX_PAYLOAD_BYTES` (64 KiB) with a per-format AFL dictionary. FuzzTest drops a
larger seed with only a warning, so generated seeds over the limit are left out, and a corpus file, repro file or deep
payload over it aborts. Typed targets
take a `ChoiceTape` (a `vector<uint64_t>` of choices plus a `vector<string>` pool), because FuzzTest
domains cannot be built from a runtime `Schema`; the generator consumes the tape to build a value.

Deserializers never throw. Structural malformation (including trailing data after the root), exceeding
`MAX_NESTING_DEPTH`, and a value the target type cannot represent (an out-of-range or non-integral number, a
non-finite document number, an epoch timestamp beyond the system clock) come back as an error
(`DeserializeShape` returns a non-empty `Optional<DeserializerError>`). A skipped value (an unmodeled member, or one of
the wrong type) is held to the same grammar, so malformed JSON or XML anywhere in the payload is an error. A well-formed
value of the wrong type leaves the member absent without an error. A union with more than one non-null modeled member set
is an error; null and unmodeled members do not count. Every comparison also fails on a decoded union holding two members.

## Reference parsers

The reference targets judge the codecs against the parsers the legacy SDK read with: the CRT's JSON parser (cJSON, called
through `cJSON_ParseWithOpts` so trailing data is rejected) and tinyxml2 11.0.0, the version core vendors, configured as
the legacy `XmlDocument` was (entities processed, whitespace preserved). tinyxml2 is fetched by `tests/fuzz/CMakeLists.txt`
and linked only into the fuzz binary. There is no CBOR reference.

A reference supplies the tree and the decoded text; `ReferenceParity.cpp` walks that tree along the schema by the
protocol's rules (member names and `jsonName`/`xmlName`, attributes, flattened and wrapped lists and maps, which repeated
member wins, what a value of the wrong type does) and turns scalar text into values as legacy clients did: XML number,
boolean and timestamp text is trimmed, and XML booleans are `true` or `false` in any case. It parses numbers with its own
parsers (`ScalarText.cpp`), not the codecs', so a bug in a codec's number parsing shows up as a mismatch. Where the read
contract deliberately differs from legacy (an out-of-range or non-integral number fails; text a number cannot be read
from is absent rather than 0), the walker follows the contract.
The result, a `ReferenceReading`, is checked three ways:

- **reads**: on every fuzz schema the codec accepts a payload exactly when the reference parses it and its reading does not
  require a failure (out-of-range or non-integral number, a union with two members set, an epoch timestamp beyond the
  clock, a second root element, nesting beyond `MAX_NESTING_DEPTH`), and reads the same value tree;
- **writes**: the reference accepts what the codec writes for a generated value, and reads it back as that value under the
  codec's round-trip tolerances;
- **awsQuery responses**: reads, through `AwsQueryProtocol`.

The walker models where the references are laxer than the codecs, which reject: tinyxml2 drops a closing tag that closes
no element (a reading that must fail), and its tokenizer tolerates other malformed markup (whitespace before an element
name, junk in an end tag, `\v` and `\f` between elements), so whether a document holding such markup must be read is not
judged (`TinyXmlLeniency`). Every other rejection and every acceptance is judged.

The walker follows the codecs where they part from the legacy readers: a repeated JSON member or map key keeps its last
value (cJSON's lookup returned the first), a repeated XML element keeps its first, and a repeated key inside a JSON document
keeps its first.

What a reference cannot judge is skipped, each for a stated reason in `ReferenceParity.cpp`:

- input containing NUL or only whitespace: both references read a NUL-terminated copy, and reject blank input that the
  codecs read as an empty struct; a string with an escaped NUL (`\u0000`), which cJSON truncates;
- XML nested deeper than 500 elements: tinyxml2's own limit, below `MAX_NESTING_DEPTH`;
- the exact value of a JSON integer beyond 2^53, since cJSON reads numbers as doubles: it is compared after rounding
  (`CodecTolerance::ReadByCrtJson`), and whether a long cJSON reads as ±2^63 fits is not judged;
- XML text holding a reference tinyxml2 mangles (an unrecognised entity, or one decoding to U+0000), and text beside an
  element, comment or processing instruction;
- the value of whitespace-only XML text: tinyxml2 drops it, the codec deliberately keeps it;
- whether the JSON codec must accept a payload holding a control byte below space other than tab, LF and CR (cJSON skips
  them all as whitespace) or a `\u` not followed by four hex digits (cJSON reads it as U+0000);
- the type and sign of a JSON document number: cJSON cannot tell `1` from `1.0` or `-0` from `-0.0`, so document numbers
  compare by value.

## Layout

- `harness/FuzzValue.*` - the value tree, plus `FindMismatch` and the per-codec `CodecTolerance`.
- `harness/DynamicStruct.*` - one `SerializableStruct` that reads and writes any schema.
- `harness/FuzzSchemas.*` - the fixed schema registry every byte input is replayed against.
- `harness/FuzzDomains.*` - the choice tape, value and document generators, seeds, dictionary loading.
- `harness/CodecFuzzTargets.*` - the three oracles, shared by the codec targets.
- `harness/ReferenceParity.*` - the reference readers and the read, write and awsQuery comparisons.
- `harness/ScalarText.*` - the oracles' own integer, double and epoch-seconds parsers.
- `targets/*.cpp` - one file per codec or protocol: a thin wrapper plus `FUZZ_TEST` registrations.
- `dictionaries/*.dict` - AFL dictionaries from smithy-java (Apache-2.0).
- `corpus/<Suite.Test>/` - raw byte regression inputs, replayed on every `unit` run.
- `findings/<Suite.Test>/` - `.tape` records of failing typed inputs (`choices: {...}` and `strings: {...}` lines,
  strings with C escapes). Each typed target adds its records to its seeds, and `CodecRegression.*` replays the codec
  ones, so a recorded finding is re-run on every `unit` run. A malformed record aborts. Typed targets never load files
  from `corpus/`.

Corpus files must sit in a directory named for a real `Suite.Test` and stay under 1 KiB. Binary inputs (CBOR) are stored
base64-encoded in a file ending `.b64` and decoded when the seeds load; text inputs (JSON, XML) are stored as written.
`repro` accepts either form. Deep inputs are
generated instead: every byte target is also seeded with its codec's encoding of `Node` nested
`DEEP_SEED_DEPTH` (= `MAX_NESTING_DEPTH`) structures deep (`DeepNodePayload` in `FuzzDomains.cpp`), which exercises the
recursive read and write paths at the limit. JSON targets also get a `DocumentValue` whose document is nested lists to
the same depth (`DeepDocumentPayload`).

The generator cannot build a timestamp outside what `system_clock` holds, because `DateTime` cannot represent one; on
Linux that ends in 2262. The `ReserializeIsStable` corpus therefore carries years 0001 and 9999 in every timestamp format,
so the out-of-range read paths still run.

The XML reader does not check the root element's name, so every XML corpus file is read against every schema; a file
named for a float bug can hold an `<IntegerValue>` body that reaches `FloatValue`.

## Adding a schema or a target

Add a schema to `FuzzSchemas.cpp` and every byte target picks it up; keep ids free of `#`, because
the XML serializer uses the shape id as the root element name. For a new codec, add a
`targets/<Name>Fuzz.cpp` that calls the shared oracles with that codec and its tolerance. New files
are globbed, so re-run the script (it re-configures CMake).

Seeds passed to `.WithSeeds` must be lambdas (`.WithSeeds([] { ... })`). `FUZZ_TEST` registration
runs before `Aws::InitAPI`, so an eager seed list would build schema objects too early.

Fuzzing mode compiles with `-fno-jump-tables`. On AArch64, a late SimplifyCFG pass builds switch lookup
tables of `__sancov_cntrs` pointers outside COMDAT groups, which fails to link across translation units
with "defined in discarded section".

`ENABLE_SCHEMA_FUZZ_TESTS` cannot be combined with `ENABLE_TESTING`: the vendored gtest and FuzzTest's
gtest collide, and CMake stops with an error.

## When a target fails

1. Save the input. FuzzTest prints it, and byte targets also print it base64-encoded. For a byte
   target write the input to `corpus/<Suite.Test>/<short-description>`, as `<short-description>.b64` if it is binary; for a typed target record
   the printed `choices`/`strings` in `findings/<Suite.Test>/<short-description>.tape`, strings included in full.
2. Reproduce: `run_fuzz.sh replay <Suite.Test> tests/fuzz/reproducers/<file>` for any target, or, for a
   byte target, `run_fuzz.sh repro <Suite.Test> tests/fuzz/corpus/<Suite.Test>/<file>`.
3. If the codec is wrong, add a failing test in
   `tests/aws-cpp-sdk-core-tests/smithy/client/schema/` first, then fix it, then keep the corpus file.
4. If the behaviour is deliberate and an existing core unit test already asserts it, add a named
   flag to `CodecTolerance` citing that test, plus a `FuzzValueTest` case. Do not widen an existing flag.
5. If the harness is wrong, fix it and add a harness test.
6. Re-run the target for at least 10 minutes.

## Byte/Short narrowing

`ShapeDeserializer` has no `ReadByte`/`ReadShort`: `ReadInteger` covers them, and rejecting
out-of-range values is the caller's job. `DynamicStruct::ReadValue` is the reference for what
generated code must do.

## Tolerances

One row per `CodecTolerance` flag, plus the null-document generator rule. Each row names the test or rule
that pins the behaviour.

| Codec | Tolerance | Pinned by (test or rule) |
|---|---|---|
| CBOR, and XML/JSON date-time and http-date members | timestamps read back as the expected value truncated toward zero to whole seconds; sub-second digits must not leak and rounding up fails (`DateTime::Seconds()` and `system_clock::to_time_t` both truncate toward zero) | `CborShapeSerializerTest.TimestampFractionalSeconds`; `FuzzValue.SecondsPrecisionRequiresTruncationTowardZero` |
| JSON, and XML epoch-seconds members | an epoch-seconds timestamp may read back as exactly what `DateTime(double)` decodes its text to, which can be 1 ms toward zero; no other difference is accepted | `SerdeTraitsTest.EpochSecondsToDateTimeMatchesLegacyDateTimeDouble`; `FuzzValue.EpochSecondsAcceptsOnlyTheLegacyTruncatedDecode` |
| CBOR | pre-epoch timestamps (<= -1000 ms) read back absent, in members, list elements and map values | `CborShapeDeserializerTest.TimestampNegative*ReturnsEmpty`; `FuzzValue.CborPreEpochDropBoundaryIsMinusOneSecond` |
| CBOR | expected `-0.0` may read back as `+0.0`, never the reverse: the CRT's `aws_cbor_encoder_write_float` encodes integral doubles as integers | `CborShapeSerializerTest.NegativeZeroFloatIsEncodedAsIntegerZero`; `FuzzValue.CborMayDropNegativeZeroSign` |
| XML | an empty list or map may read back absent; XML cannot distinguish the two | `FuzzValue.XmlMayDropEmptyContainers` |
| JSON | documents compare an integer to an integer and a double to a double (NaN equals NaN, zero keeps its sign); `JsonShapeSerializer::FormatDouble` keeps a `.0` marker so a double never reads back as an integer | `FuzzValue.DocumentIntegersRequireIntegersOfTheSameValue`, `FuzzValue.DocumentDoublesRequireDoublesWithNanAndSignedZeroPreserved` |
| JSON | a non-finite document double may read back as the string `"NaN"`, `"Infinity"` or `"-Infinity"`, which is how JSON writes it | `JsonShapeSerializerTest.NonFiniteDocumentDoubleIsWrittenAsItsString`; `FuzzValue.NonFiniteDocumentDoublesMayReadBackAsTheirStrings` |
| all | a null document directly in a member, list or map slot is never generated: a null member reads back absent and nothing is `@sparse`. Nulls nested inside a document are generated and round-trip | generator rule in `FuzzDomains` |
