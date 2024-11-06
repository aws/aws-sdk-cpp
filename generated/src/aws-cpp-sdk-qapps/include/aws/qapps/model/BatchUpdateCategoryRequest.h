/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/QAppsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/model/CategoryInput.h>
#include <utility>

namespace Aws
{
namespace QApps
{
namespace Model
{

  /**
   */
  class BatchUpdateCategoryRequest : public QAppsRequest
  {
  public:
    AWS_QAPPS_API BatchUpdateCategoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateCategory"; }

    AWS_QAPPS_API Aws::String SerializePayload() const override;

    AWS_QAPPS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business application environment
     * instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline BatchUpdateCategoryRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline BatchUpdateCategoryRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline BatchUpdateCategoryRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of categories to be updated with their new values.</p>
     */
    inline const Aws::Vector<CategoryInput>& GetCategories() const{ return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    inline void SetCategories(const Aws::Vector<CategoryInput>& value) { m_categoriesHasBeenSet = true; m_categories = value; }
    inline void SetCategories(Aws::Vector<CategoryInput>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }
    inline BatchUpdateCategoryRequest& WithCategories(const Aws::Vector<CategoryInput>& value) { SetCategories(value); return *this;}
    inline BatchUpdateCategoryRequest& WithCategories(Aws::Vector<CategoryInput>&& value) { SetCategories(std::move(value)); return *this;}
    inline BatchUpdateCategoryRequest& AddCategories(const CategoryInput& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    inline BatchUpdateCategoryRequest& AddCategories(CategoryInput&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<CategoryInput> m_categories;
    bool m_categoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
