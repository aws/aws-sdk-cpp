/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/DescribeJournalS3ExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeJournalS3ExportRequest::DescribeJournalS3ExportRequest() : 
    m_nameHasBeenSet(false),
    m_exportIdHasBeenSet(false)
{
}

Aws::String DescribeJournalS3ExportRequest::SerializePayload() const
{
  return {};
}




