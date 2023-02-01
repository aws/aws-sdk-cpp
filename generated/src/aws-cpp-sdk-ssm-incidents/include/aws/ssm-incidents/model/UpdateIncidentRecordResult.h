/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>

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
namespace SSMIncidents
{
namespace Model
{
  class UpdateIncidentRecordResult
  {
  public:
    AWS_SSMINCIDENTS_API UpdateIncidentRecordResult();
    AWS_SSMINCIDENTS_API UpdateIncidentRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API UpdateIncidentRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
