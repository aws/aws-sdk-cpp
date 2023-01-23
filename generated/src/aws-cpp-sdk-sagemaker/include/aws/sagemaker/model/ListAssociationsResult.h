/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AssociationSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListAssociationsResult
  {
  public:
    AWS_SAGEMAKER_API ListAssociationsResult();
    AWS_SAGEMAKER_API ListAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of associations and their properties.</p>
     */
    inline const Aws::Vector<AssociationSummary>& GetAssociationSummaries() const{ return m_associationSummaries; }

    /**
     * <p>A list of associations and their properties.</p>
     */
    inline void SetAssociationSummaries(const Aws::Vector<AssociationSummary>& value) { m_associationSummaries = value; }

    /**
     * <p>A list of associations and their properties.</p>
     */
    inline void SetAssociationSummaries(Aws::Vector<AssociationSummary>&& value) { m_associationSummaries = std::move(value); }

    /**
     * <p>A list of associations and their properties.</p>
     */
    inline ListAssociationsResult& WithAssociationSummaries(const Aws::Vector<AssociationSummary>& value) { SetAssociationSummaries(value); return *this;}

    /**
     * <p>A list of associations and their properties.</p>
     */
    inline ListAssociationsResult& WithAssociationSummaries(Aws::Vector<AssociationSummary>&& value) { SetAssociationSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of associations and their properties.</p>
     */
    inline ListAssociationsResult& AddAssociationSummaries(const AssociationSummary& value) { m_associationSummaries.push_back(value); return *this; }

    /**
     * <p>A list of associations and their properties.</p>
     */
    inline ListAssociationsResult& AddAssociationSummaries(AssociationSummary&& value) { m_associationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of associations, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of associations, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of associations, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of associations, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of associations, if there are any.</p>
     */
    inline ListAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of associations, if there are any.</p>
     */
    inline ListAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of associations, if there are any.</p>
     */
    inline ListAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssociationSummary> m_associationSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
