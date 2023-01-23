/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-explorer-2/model/BatchGetViewError.h>
#include <aws/resource-explorer-2/model/View.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class BatchGetViewResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API BatchGetViewResult();
    AWS_RESOURCEEXPLORER2_API BatchGetViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API BatchGetViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If any of the specified ARNs result in an error, then this structure
     * describes the error.</p>
     */
    inline const Aws::Vector<BatchGetViewError>& GetErrors() const{ return m_errors; }

    /**
     * <p>If any of the specified ARNs result in an error, then this structure
     * describes the error.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchGetViewError>& value) { m_errors = value; }

    /**
     * <p>If any of the specified ARNs result in an error, then this structure
     * describes the error.</p>
     */
    inline void SetErrors(Aws::Vector<BatchGetViewError>&& value) { m_errors = std::move(value); }

    /**
     * <p>If any of the specified ARNs result in an error, then this structure
     * describes the error.</p>
     */
    inline BatchGetViewResult& WithErrors(const Aws::Vector<BatchGetViewError>& value) { SetErrors(value); return *this;}

    /**
     * <p>If any of the specified ARNs result in an error, then this structure
     * describes the error.</p>
     */
    inline BatchGetViewResult& WithErrors(Aws::Vector<BatchGetViewError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>If any of the specified ARNs result in an error, then this structure
     * describes the error.</p>
     */
    inline BatchGetViewResult& AddErrors(const BatchGetViewError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>If any of the specified ARNs result in an error, then this structure
     * describes the error.</p>
     */
    inline BatchGetViewResult& AddErrors(BatchGetViewError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>A structure with a list of objects with details for each of the specified
     * views.</p>
     */
    inline const Aws::Vector<View>& GetViews() const{ return m_views; }

    /**
     * <p>A structure with a list of objects with details for each of the specified
     * views.</p>
     */
    inline void SetViews(const Aws::Vector<View>& value) { m_views = value; }

    /**
     * <p>A structure with a list of objects with details for each of the specified
     * views.</p>
     */
    inline void SetViews(Aws::Vector<View>&& value) { m_views = std::move(value); }

    /**
     * <p>A structure with a list of objects with details for each of the specified
     * views.</p>
     */
    inline BatchGetViewResult& WithViews(const Aws::Vector<View>& value) { SetViews(value); return *this;}

    /**
     * <p>A structure with a list of objects with details for each of the specified
     * views.</p>
     */
    inline BatchGetViewResult& WithViews(Aws::Vector<View>&& value) { SetViews(std::move(value)); return *this;}

    /**
     * <p>A structure with a list of objects with details for each of the specified
     * views.</p>
     */
    inline BatchGetViewResult& AddViews(const View& value) { m_views.push_back(value); return *this; }

    /**
     * <p>A structure with a list of objects with details for each of the specified
     * views.</p>
     */
    inline BatchGetViewResult& AddViews(View&& value) { m_views.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchGetViewError> m_errors;

    Aws::Vector<View> m_views;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
