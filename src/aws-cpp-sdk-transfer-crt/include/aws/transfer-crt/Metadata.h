/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <chrono>
#include <utility>

namespace Aws {
namespace TransferCrt {

// WriteMetadata specifies blob metadata information.
// @uri:              destination URI of the blob, in <scheme>://<bucket>/<path> format.
// @content_type:     MIME type of the @uri content.
// @content_encoding: content encoding that was applied.
// @metadata:         metadata key/value pairs.
struct WriteMetadata {
    // Constructor for the default case - just create a blob at @uri.
    explicit WriteMetadata(Aws::String uri) : WriteMetadata(uri, "", "") {}

    WriteMetadata(Aws::String uri,
                  Aws::String content_type,
                  Aws::String content_encoding,
                  Aws::Map<Aws::String, Aws::String> metadata = {})
        : uri{uri},
          content_type{content_type},
          content_encoding{content_encoding},
          metadata{metadata} {}

    // Destination URI of the blob, in <scheme>://<bucket>/<path> format.
    Aws::String uri;

    // Content-Type (MIME type) of @uri.
    Aws::String content_type;

    // Content-Encoding (if any) of @uri.
    Aws::String content_encoding;

    // Metadata key/value pairs.
    Aws::Map<Aws::String, Aws::String> metadata;

    // S3 Object Tagging key/value pairs (S3 objects only).
    // These require s3:PutObjectTagging permissions on @uri, otherwise requests fail with 403.
    // The tags also have to satisfy the following syntax restrictions and limits:
    // * https://docs.aws.amazon.com/AmazonS3/latest/userguide/tagging-managing.html
    // * https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html
    // * https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html
    Aws::Map<Aws::String, Aws::String> tags;
};

// ReadMetadata encapsulates the metadata associated with a given blob.
struct ReadMetadata {
    // URI of the blob.
    Aws::String uri;

    // Size of @path in bytes.
    size_t size = 0;

    // Date/time the blob was last modified.
    std::chrono::system_clock::time_point last_modified;

    // MIME type of the blob.
    Aws::String content_type;

    // Indicates whether the data at @path is stored in compressed format (RFC 7231, 3.1.2.2).
    Aws::String content_encoding;

    // ETag value.
    Aws::String etag;

    // Metadata key/value pairs.
    Aws::Map<Aws::String, Aws::String> metadata;
};

static inline std::ostream &operator<<(std::ostream &os, const ReadMetadata &md) {
    os << "ReadMetadata(\"" << md.uri << "\", " << md.size;

    time_t lm = std::chrono::system_clock::to_time_t(md.last_modified);
    if (lm) {  // Format: "Wed Jun 30 21:49:08 1993\n" - truncate before " 1993\n":
        os << ", " << Aws::String{ctime(&lm), 19};
    }
    if (!md.etag.empty()) os << ", " << md.etag;
    if (!md.content_type.empty()) {
        os << ", " << md.content_type;
        if (!md.content_encoding.empty()) os << " (" << md.content_encoding << ")";
    }
    if (!md.metadata.empty()) {
        os << ",";
        for (const auto &e : md.metadata) os << " " << e.first << "=" << e.second;
    }
    return os << ")";
}

}  // namespace TransferCrt
}  // namespace Aws
