/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/Category.h>
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
namespace QApps
{
namespace Model
{
  class ListCategoriesResult
  {
  public:
    AWS_QAPPS_API ListCategoriesResult();
    AWS_QAPPS_API ListCategoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API ListCategoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The categories of a Amazon Q Business application environment instance.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const{ return m_categories; }
    inline void SetCategories(const Aws::Vector<Category>& value) { m_categories = value; }
    inline void SetCategories(Aws::Vector<Category>&& value) { m_categories = std::move(value); }
    inline ListCategoriesResult& WithCategories(const Aws::Vector<Category>& value) { SetCategories(value); return *this;}
    inline ListCategoriesResult& WithCategories(Aws::Vector<Category>&& value) { SetCategories(std::move(value)); return *this;}
    inline ListCategoriesResult& AddCategories(const Category& value) { m_categories.push_back(value); return *this; }
    inline ListCategoriesResult& AddCategories(Category&& value) { m_categories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCategoriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCategoriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCategoriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Category> m_categories;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
