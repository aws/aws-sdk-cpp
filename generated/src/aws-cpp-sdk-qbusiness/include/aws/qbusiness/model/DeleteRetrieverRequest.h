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
    AWS_QBUSINESS_API DeleteRetrieverRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRetriever"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application using the retriever.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    DeleteRetrieverRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the retriever being deleted.</p>
     */
    inline const Aws::String& GetRetrieverId() const { return m_retrieverId; }
    inline bool RetrieverIdHasBeenSet() const { return m_retrieverIdHasBeenSet; }
    template<typename RetrieverIdT = Aws::String>
    void SetRetrieverId(RetrieverIdT&& value) { m_retrieverIdHasBeenSet = true; m_retrieverId = std::forward<RetrieverIdT>(value); }
    template<typename RetrieverIdT = Aws::String>
    DeleteRetrieverRequest& WithRetrieverId(RetrieverIdT&& value) { SetRetrieverId(std::forward<RetrieverIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_retrieverId;
    bool m_retrieverIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
