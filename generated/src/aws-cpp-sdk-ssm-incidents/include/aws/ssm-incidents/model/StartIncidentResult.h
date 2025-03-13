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
    AWS_SSMINCIDENTS_API StartIncidentResult() = default;
    AWS_SSMINCIDENTS_API StartIncidentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API StartIncidentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the newly created incident record.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const { return m_incidentRecordArn; }
    template<typename IncidentRecordArnT = Aws::String>
    void SetIncidentRecordArn(IncidentRecordArnT&& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = std::forward<IncidentRecordArnT>(value); }
    template<typename IncidentRecordArnT = Aws::String>
    StartIncidentResult& WithIncidentRecordArn(IncidentRecordArnT&& value) { SetIncidentRecordArn(std::forward<IncidentRecordArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartIncidentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
