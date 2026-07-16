/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

namespace Aws {
namespace OpenSearchService {
namespace Model {
enum class InsightFeedbackThumbs { NOT_SET, Up, Down };

namespace InsightFeedbackThumbsMapper {
AWS_OPENSEARCHSERVICE_API InsightFeedbackThumbs GetInsightFeedbackThumbsForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForInsightFeedbackThumbs(InsightFeedbackThumbs value);
}  // namespace InsightFeedbackThumbsMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
