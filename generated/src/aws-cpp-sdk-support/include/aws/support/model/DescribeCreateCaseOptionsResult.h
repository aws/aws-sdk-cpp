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
    AWS_SUPPORT_API DescribeCreateCaseOptionsResult();
    AWS_SUPPORT_API DescribeCreateCaseOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeCreateCaseOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Language availability can be any of the following:</p> <ul> <li> <p>
     * available </p> </li> <li> <p> best_effort </p> </li> <li> <p> unavailable </p>
     * </li> </ul>
     */
    inline const Aws::String& GetLanguageAvailability() const{ return m_languageAvailability; }

    /**
     * <p>Language availability can be any of the following:</p> <ul> <li> <p>
     * available </p> </li> <li> <p> best_effort </p> </li> <li> <p> unavailable </p>
     * </li> </ul>
     */
    inline void SetLanguageAvailability(const Aws::String& value) { m_languageAvailability = value; }

    /**
     * <p>Language availability can be any of the following:</p> <ul> <li> <p>
     * available </p> </li> <li> <p> best_effort </p> </li> <li> <p> unavailable </p>
     * </li> </ul>
     */
    inline void SetLanguageAvailability(Aws::String&& value) { m_languageAvailability = std::move(value); }

    /**
     * <p>Language availability can be any of the following:</p> <ul> <li> <p>
     * available </p> </li> <li> <p> best_effort </p> </li> <li> <p> unavailable </p>
     * </li> </ul>
     */
    inline void SetLanguageAvailability(const char* value) { m_languageAvailability.assign(value); }

    /**
     * <p>Language availability can be any of the following:</p> <ul> <li> <p>
     * available </p> </li> <li> <p> best_effort </p> </li> <li> <p> unavailable </p>
     * </li> </ul>
     */
    inline DescribeCreateCaseOptionsResult& WithLanguageAvailability(const Aws::String& value) { SetLanguageAvailability(value); return *this;}

    /**
     * <p>Language availability can be any of the following:</p> <ul> <li> <p>
     * available </p> </li> <li> <p> best_effort </p> </li> <li> <p> unavailable </p>
     * </li> </ul>
     */
    inline DescribeCreateCaseOptionsResult& WithLanguageAvailability(Aws::String&& value) { SetLanguageAvailability(std::move(value)); return *this;}

    /**
     * <p>Language availability can be any of the following:</p> <ul> <li> <p>
     * available </p> </li> <li> <p> best_effort </p> </li> <li> <p> unavailable </p>
     * </li> </ul>
     */
    inline DescribeCreateCaseOptionsResult& WithLanguageAvailability(const char* value) { SetLanguageAvailability(value); return *this;}


    /**
     * <p> A JSON-formatted array that contains the available communication type
     * options, along with the available support timeframes for the given inputs. </p>
     */
    inline const Aws::Vector<CommunicationTypeOptions>& GetCommunicationTypes() const{ return m_communicationTypes; }

    /**
     * <p> A JSON-formatted array that contains the available communication type
     * options, along with the available support timeframes for the given inputs. </p>
     */
    inline void SetCommunicationTypes(const Aws::Vector<CommunicationTypeOptions>& value) { m_communicationTypes = value; }

    /**
     * <p> A JSON-formatted array that contains the available communication type
     * options, along with the available support timeframes for the given inputs. </p>
     */
    inline void SetCommunicationTypes(Aws::Vector<CommunicationTypeOptions>&& value) { m_communicationTypes = std::move(value); }

    /**
     * <p> A JSON-formatted array that contains the available communication type
     * options, along with the available support timeframes for the given inputs. </p>
     */
    inline DescribeCreateCaseOptionsResult& WithCommunicationTypes(const Aws::Vector<CommunicationTypeOptions>& value) { SetCommunicationTypes(value); return *this;}

    /**
     * <p> A JSON-formatted array that contains the available communication type
     * options, along with the available support timeframes for the given inputs. </p>
     */
    inline DescribeCreateCaseOptionsResult& WithCommunicationTypes(Aws::Vector<CommunicationTypeOptions>&& value) { SetCommunicationTypes(std::move(value)); return *this;}

    /**
     * <p> A JSON-formatted array that contains the available communication type
     * options, along with the available support timeframes for the given inputs. </p>
     */
    inline DescribeCreateCaseOptionsResult& AddCommunicationTypes(const CommunicationTypeOptions& value) { m_communicationTypes.push_back(value); return *this; }

    /**
     * <p> A JSON-formatted array that contains the available communication type
     * options, along with the available support timeframes for the given inputs. </p>
     */
    inline DescribeCreateCaseOptionsResult& AddCommunicationTypes(CommunicationTypeOptions&& value) { m_communicationTypes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeCreateCaseOptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeCreateCaseOptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeCreateCaseOptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_languageAvailability;

    Aws::Vector<CommunicationTypeOptions> m_communicationTypes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
