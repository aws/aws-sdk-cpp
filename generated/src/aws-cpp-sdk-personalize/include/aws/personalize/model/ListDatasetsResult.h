﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/DatasetSummary.h>
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
namespace Personalize
{
namespace Model
{
  class ListDatasetsResult
  {
  public:
    AWS_PERSONALIZE_API ListDatasetsResult();
    AWS_PERSONALIZE_API ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline const Aws::Vector<DatasetSummary>& GetDatasets() const{ return m_datasets; }

    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline void SetDatasets(const Aws::Vector<DatasetSummary>& value) { m_datasets = value; }

    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline void SetDatasets(Aws::Vector<DatasetSummary>&& value) { m_datasets = std::move(value); }

    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline ListDatasetsResult& WithDatasets(const Aws::Vector<DatasetSummary>& value) { SetDatasets(value); return *this;}

    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline ListDatasetsResult& WithDatasets(Aws::Vector<DatasetSummary>&& value) { SetDatasets(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline ListDatasetsResult& AddDatasets(const DatasetSummary& value) { m_datasets.push_back(value); return *this; }

    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline ListDatasetsResult& AddDatasets(DatasetSummary&& value) { m_datasets.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline ListDatasetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline ListDatasetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline ListDatasetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDatasetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDatasetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDatasetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DatasetSummary> m_datasets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
