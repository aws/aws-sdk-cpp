/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/MediaStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediastore/model/CorsRule.h>
#include <utility>

namespace Aws
{
namespace MediaStore
{
namespace Model
{

  /**
   */
  class PutCorsPolicyRequest : public MediaStoreRequest
  {
  public:
    AWS_MEDIASTORE_API PutCorsPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutCorsPolicy"; }

    AWS_MEDIASTORE_API Aws::String SerializePayload() const override;

    AWS_MEDIASTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the container that you want to assign the CORS policy to.</p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    PutCorsPolicyRequest& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CORS policy to apply to the container. </p>
     */
    inline const Aws::Vector<CorsRule>& GetCorsPolicy() const { return m_corsPolicy; }
    inline bool CorsPolicyHasBeenSet() const { return m_corsPolicyHasBeenSet; }
    template<typename CorsPolicyT = Aws::Vector<CorsRule>>
    void SetCorsPolicy(CorsPolicyT&& value) { m_corsPolicyHasBeenSet = true; m_corsPolicy = std::forward<CorsPolicyT>(value); }
    template<typename CorsPolicyT = Aws::Vector<CorsRule>>
    PutCorsPolicyRequest& WithCorsPolicy(CorsPolicyT&& value) { SetCorsPolicy(std::forward<CorsPolicyT>(value)); return *this;}
    template<typename CorsPolicyT = CorsRule>
    PutCorsPolicyRequest& AddCorsPolicy(CorsPolicyT&& value) { m_corsPolicyHasBeenSet = true; m_corsPolicy.emplace_back(std::forward<CorsPolicyT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::Vector<CorsRule> m_corsPolicy;
    bool m_corsPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
