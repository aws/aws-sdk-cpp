/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/VersionDeleteError.h>
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
namespace Omics
{
namespace Model
{
  class DeleteAnnotationStoreVersionsResult
  {
  public:
    AWS_OMICS_API DeleteAnnotationStoreVersionsResult();
    AWS_OMICS_API DeleteAnnotationStoreVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API DeleteAnnotationStoreVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Any errors that occur when attempting to delete an annotation store version.
     * </p>
     */
    inline const Aws::Vector<VersionDeleteError>& GetErrors() const{ return m_errors; }

    /**
     * <p> Any errors that occur when attempting to delete an annotation store version.
     * </p>
     */
    inline void SetErrors(const Aws::Vector<VersionDeleteError>& value) { m_errors = value; }

    /**
     * <p> Any errors that occur when attempting to delete an annotation store version.
     * </p>
     */
    inline void SetErrors(Aws::Vector<VersionDeleteError>&& value) { m_errors = std::move(value); }

    /**
     * <p> Any errors that occur when attempting to delete an annotation store version.
     * </p>
     */
    inline DeleteAnnotationStoreVersionsResult& WithErrors(const Aws::Vector<VersionDeleteError>& value) { SetErrors(value); return *this;}

    /**
     * <p> Any errors that occur when attempting to delete an annotation store version.
     * </p>
     */
    inline DeleteAnnotationStoreVersionsResult& WithErrors(Aws::Vector<VersionDeleteError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p> Any errors that occur when attempting to delete an annotation store version.
     * </p>
     */
    inline DeleteAnnotationStoreVersionsResult& AddErrors(const VersionDeleteError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p> Any errors that occur when attempting to delete an annotation store version.
     * </p>
     */
    inline DeleteAnnotationStoreVersionsResult& AddErrors(VersionDeleteError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteAnnotationStoreVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteAnnotationStoreVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteAnnotationStoreVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<VersionDeleteError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
