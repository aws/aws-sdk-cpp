/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ResourceGroups
{
namespace Model
{
  class PutGroupConfigurationResult
  {
  public:
    AWS_RESOURCEGROUPS_API PutGroupConfigurationResult();
    AWS_RESOURCEGROUPS_API PutGroupConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API PutGroupConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
