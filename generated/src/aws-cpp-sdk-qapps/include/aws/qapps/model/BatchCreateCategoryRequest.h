/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/QAppsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/model/BatchCreateCategoryInputCategory.h>
#include <utility>

namespace Aws
{
namespace QApps
{
namespace Model
{

  /**
   */
  class BatchCreateCategoryRequest : public QAppsRequest
  {
  public:
    AWS_QAPPS_API BatchCreateCategoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateCategory"; }

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
    inline BatchCreateCategoryRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline BatchCreateCategoryRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline BatchCreateCategoryRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of category objects to be created</p>
     */
    inline const Aws::Vector<BatchCreateCategoryInputCategory>& GetCategories() const{ return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    inline void SetCategories(const Aws::Vector<BatchCreateCategoryInputCategory>& value) { m_categoriesHasBeenSet = true; m_categories = value; }
    inline void SetCategories(Aws::Vector<BatchCreateCategoryInputCategory>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }
    inline BatchCreateCategoryRequest& WithCategories(const Aws::Vector<BatchCreateCategoryInputCategory>& value) { SetCategories(value); return *this;}
    inline BatchCreateCategoryRequest& WithCategories(Aws::Vector<BatchCreateCategoryInputCategory>&& value) { SetCategories(std::move(value)); return *this;}
    inline BatchCreateCategoryRequest& AddCategories(const BatchCreateCategoryInputCategory& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    inline BatchCreateCategoryRequest& AddCategories(BatchCreateCategoryInputCategory&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<BatchCreateCategoryInputCategory> m_categories;
    bool m_categoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
