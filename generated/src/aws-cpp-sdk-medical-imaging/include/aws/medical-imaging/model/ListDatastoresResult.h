/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/DatastoreSummary.h>
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
namespace MedicalImaging
{
namespace Model
{
  class ListDatastoresResult
  {
  public:
    AWS_MEDICALIMAGING_API ListDatastoresResult();
    AWS_MEDICALIMAGING_API ListDatastoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API ListDatastoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of summaries of data stores.</p>
     */
    inline const Aws::Vector<DatastoreSummary>& GetDatastoreSummaries() const{ return m_datastoreSummaries; }

    /**
     * <p>The list of summaries of data stores.</p>
     */
    inline void SetDatastoreSummaries(const Aws::Vector<DatastoreSummary>& value) { m_datastoreSummaries = value; }

    /**
     * <p>The list of summaries of data stores.</p>
     */
    inline void SetDatastoreSummaries(Aws::Vector<DatastoreSummary>&& value) { m_datastoreSummaries = std::move(value); }

    /**
     * <p>The list of summaries of data stores.</p>
     */
    inline ListDatastoresResult& WithDatastoreSummaries(const Aws::Vector<DatastoreSummary>& value) { SetDatastoreSummaries(value); return *this;}

    /**
     * <p>The list of summaries of data stores.</p>
     */
    inline ListDatastoresResult& WithDatastoreSummaries(Aws::Vector<DatastoreSummary>&& value) { SetDatastoreSummaries(std::move(value)); return *this;}

    /**
     * <p>The list of summaries of data stores.</p>
     */
    inline ListDatastoresResult& AddDatastoreSummaries(const DatastoreSummary& value) { m_datastoreSummaries.push_back(value); return *this; }

    /**
     * <p>The list of summaries of data stores.</p>
     */
    inline ListDatastoresResult& AddDatastoreSummaries(DatastoreSummary&& value) { m_datastoreSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used to retrieve the list of data stores on the next
     * page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the list of data stores on the next
     * page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the list of data stores on the next
     * page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the list of data stores on the next
     * page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the list of data stores on the next
     * page.</p>
     */
    inline ListDatastoresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the list of data stores on the next
     * page.</p>
     */
    inline ListDatastoresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the list of data stores on the next
     * page.</p>
     */
    inline ListDatastoresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDatastoresResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDatastoresResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDatastoresResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DatastoreSummary> m_datastoreSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
