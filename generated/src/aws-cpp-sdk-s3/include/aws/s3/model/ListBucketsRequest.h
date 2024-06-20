/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>

namespace Aws
{
namespace S3
{
namespace Model
{

  /**
   */
  class ListBucketsRequest : public S3Request
  {
  public:
    AWS_S3_API ListBucketsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBuckets"; }

    AWS_S3_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace S3
} // namespace Aws
