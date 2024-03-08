/**
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
  class DeleteRetrieverRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API DeleteRetrieverRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRetriever"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Q application using the retriever.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q application using the retriever.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q application using the retriever.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q application using the retriever.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q application using the retriever.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q application using the retriever.</p>
     */
    inline DeleteRetrieverRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q application using the retriever.</p>
     */
    inline DeleteRetrieverRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q application using the retriever.</p>
     */
    inline DeleteRetrieverRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The identifier of the retriever being deleted.</p>
     */
    inline const Aws::String& GetRetrieverId() const{ return m_retrieverId; }

    /**
     * <p>The identifier of the retriever being deleted.</p>
     */
    inline bool RetrieverIdHasBeenSet() const { return m_retrieverIdHasBeenSet; }

    /**
     * <p>The identifier of the retriever being deleted.</p>
     */
    inline void SetRetrieverId(const Aws::String& value) { m_retrieverIdHasBeenSet = true; m_retrieverId = value; }

    /**
     * <p>The identifier of the retriever being deleted.</p>
     */
    inline void SetRetrieverId(Aws::String&& value) { m_retrieverIdHasBeenSet = true; m_retrieverId = std::move(value); }

    /**
     * <p>The identifier of the retriever being deleted.</p>
     */
    inline void SetRetrieverId(const char* value) { m_retrieverIdHasBeenSet = true; m_retrieverId.assign(value); }

    /**
     * <p>The identifier of the retriever being deleted.</p>
     */
    inline DeleteRetrieverRequest& WithRetrieverId(const Aws::String& value) { SetRetrieverId(value); return *this;}

    /**
     * <p>The identifier of the retriever being deleted.</p>
     */
    inline DeleteRetrieverRequest& WithRetrieverId(Aws::String&& value) { SetRetrieverId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the retriever being deleted.</p>
     */
    inline DeleteRetrieverRequest& WithRetrieverId(const char* value) { SetRetrieverId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_retrieverId;
    bool m_retrieverIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
