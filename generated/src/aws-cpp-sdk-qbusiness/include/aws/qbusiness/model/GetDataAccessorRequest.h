﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class GetDataAccessorRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API GetDataAccessorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataAccessor"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline GetDataAccessorRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetDataAccessorRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetDataAccessorRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the data accessor to retrieve.</p>
     */
    inline const Aws::String& GetDataAccessorId() const{ return m_dataAccessorId; }
    inline bool DataAccessorIdHasBeenSet() const { return m_dataAccessorIdHasBeenSet; }
    inline void SetDataAccessorId(const Aws::String& value) { m_dataAccessorIdHasBeenSet = true; m_dataAccessorId = value; }
    inline void SetDataAccessorId(Aws::String&& value) { m_dataAccessorIdHasBeenSet = true; m_dataAccessorId = std::move(value); }
    inline void SetDataAccessorId(const char* value) { m_dataAccessorIdHasBeenSet = true; m_dataAccessorId.assign(value); }
    inline GetDataAccessorRequest& WithDataAccessorId(const Aws::String& value) { SetDataAccessorId(value); return *this;}
    inline GetDataAccessorRequest& WithDataAccessorId(Aws::String&& value) { SetDataAccessorId(std::move(value)); return *this;}
    inline GetDataAccessorRequest& WithDataAccessorId(const char* value) { SetDataAccessorId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_dataAccessorId;
    bool m_dataAccessorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
