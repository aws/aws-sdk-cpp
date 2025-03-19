/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/CommunicationTypeOptions.h>
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
namespace Support
{
namespace Model
{
  class DescribeCreateCaseOptionsResult
  {
  public:
    AWS_SUPPORT_API DescribeCreateCaseOptionsResult() = default;
    AWS_SUPPORT_API DescribeCreateCaseOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeCreateCaseOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Language availability can be any of the following:</p> <ul> <li> <p>
     * available </p> </li> <li> <p> best_effort </p> </li> <li> <p> unavailable </p>
     * </li> </ul>
     */
    inline const Aws::String& GetLanguageAvailability() const { return m_languageAvailability; }
    template<typename LanguageAvailabilityT = Aws::String>
    void SetLanguageAvailability(LanguageAvailabilityT&& value) { m_languageAvailabilityHasBeenSet = true; m_languageAvailability = std::forward<LanguageAvailabilityT>(value); }
    template<typename LanguageAvailabilityT = Aws::String>
    DescribeCreateCaseOptionsResult& WithLanguageAvailability(LanguageAvailabilityT&& value) { SetLanguageAvailability(std::forward<LanguageAvailabilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A JSON-formatted array that contains the available communication type
     * options, along with the available support timeframes for the given inputs. </p>
     */
    inline const Aws::Vector<CommunicationTypeOptions>& GetCommunicationTypes() const { return m_communicationTypes; }
    template<typename CommunicationTypesT = Aws::Vector<CommunicationTypeOptions>>
    void SetCommunicationTypes(CommunicationTypesT&& value) { m_communicationTypesHasBeenSet = true; m_communicationTypes = std::forward<CommunicationTypesT>(value); }
    template<typename CommunicationTypesT = Aws::Vector<CommunicationTypeOptions>>
    DescribeCreateCaseOptionsResult& WithCommunicationTypes(CommunicationTypesT&& value) { SetCommunicationTypes(std::forward<CommunicationTypesT>(value)); return *this;}
    template<typename CommunicationTypesT = CommunicationTypeOptions>
    DescribeCreateCaseOptionsResult& AddCommunicationTypes(CommunicationTypesT&& value) { m_communicationTypesHasBeenSet = true; m_communicationTypes.emplace_back(std::forward<CommunicationTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCreateCaseOptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_languageAvailability;
    bool m_languageAvailabilityHasBeenSet = false;

    Aws::Vector<CommunicationTypeOptions> m_communicationTypes;
    bool m_communicationTypesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
