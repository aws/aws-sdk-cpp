/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
  class StartIncidentResult
  {
  public:
    AWS_SSMINCIDENTS_API StartIncidentResult();
    AWS_SSMINCIDENTS_API StartIncidentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API StartIncidentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the newly created incident record.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const{ return m_incidentRecordArn; }

    /**
     * <p>The ARN of the newly created incident record.</p>
     */
    inline void SetIncidentRecordArn(const Aws::String& value) { m_incidentRecordArn = value; }

    /**
     * <p>The ARN of the newly created incident record.</p>
     */
    inline void SetIncidentRecordArn(Aws::String&& value) { m_incidentRecordArn = std::move(value); }

    /**
     * <p>The ARN of the newly created incident record.</p>
     */
    inline void SetIncidentRecordArn(const char* value) { m_incidentRecordArn.assign(value); }

    /**
     * <p>The ARN of the newly created incident record.</p>
     */
    inline StartIncidentResult& WithIncidentRecordArn(const Aws::String& value) { SetIncidentRecordArn(value); return *this;}

    /**
     * <p>The ARN of the newly created incident record.</p>
     */
    inline StartIncidentResult& WithIncidentRecordArn(Aws::String&& value) { SetIncidentRecordArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the newly created incident record.</p>
     */
    inline StartIncidentResult& WithIncidentRecordArn(const char* value) { SetIncidentRecordArn(value); return *this;}

  private:

    Aws::String m_incidentRecordArn;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
