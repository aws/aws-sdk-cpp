/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/StandardsControlAssociationSummary.h>
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
namespace SecurityHub
{
namespace Model
{
  class ListStandardsControlAssociationsResult
  {
  public:
    AWS_SECURITYHUB_API ListStandardsControlAssociationsResult();
    AWS_SECURITYHUB_API ListStandardsControlAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListStandardsControlAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An array that provides the enablement status and other details for each
     * security control that applies to each enabled standard. </p>
     */
    inline const Aws::Vector<StandardsControlAssociationSummary>& GetStandardsControlAssociationSummaries() const{ return m_standardsControlAssociationSummaries; }

    /**
     * <p> An array that provides the enablement status and other details for each
     * security control that applies to each enabled standard. </p>
     */
    inline void SetStandardsControlAssociationSummaries(const Aws::Vector<StandardsControlAssociationSummary>& value) { m_standardsControlAssociationSummaries = value; }

    /**
     * <p> An array that provides the enablement status and other details for each
     * security control that applies to each enabled standard. </p>
     */
    inline void SetStandardsControlAssociationSummaries(Aws::Vector<StandardsControlAssociationSummary>&& value) { m_standardsControlAssociationSummaries = std::move(value); }

    /**
     * <p> An array that provides the enablement status and other details for each
     * security control that applies to each enabled standard. </p>
     */
    inline ListStandardsControlAssociationsResult& WithStandardsControlAssociationSummaries(const Aws::Vector<StandardsControlAssociationSummary>& value) { SetStandardsControlAssociationSummaries(value); return *this;}

    /**
     * <p> An array that provides the enablement status and other details for each
     * security control that applies to each enabled standard. </p>
     */
    inline ListStandardsControlAssociationsResult& WithStandardsControlAssociationSummaries(Aws::Vector<StandardsControlAssociationSummary>&& value) { SetStandardsControlAssociationSummaries(std::move(value)); return *this;}

    /**
     * <p> An array that provides the enablement status and other details for each
     * security control that applies to each enabled standard. </p>
     */
    inline ListStandardsControlAssociationsResult& AddStandardsControlAssociationSummaries(const StandardsControlAssociationSummary& value) { m_standardsControlAssociationSummaries.push_back(value); return *this; }

    /**
     * <p> An array that provides the enablement status and other details for each
     * security control that applies to each enabled standard. </p>
     */
    inline ListStandardsControlAssociationsResult& AddStandardsControlAssociationSummaries(StandardsControlAssociationSummary&& value) { m_standardsControlAssociationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline ListStandardsControlAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline ListStandardsControlAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline ListStandardsControlAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListStandardsControlAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListStandardsControlAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListStandardsControlAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<StandardsControlAssociationSummary> m_standardsControlAssociationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
