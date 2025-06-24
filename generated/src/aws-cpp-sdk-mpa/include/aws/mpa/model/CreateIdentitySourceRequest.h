/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/MPARequest.h>
#include <aws/mpa/model/IdentitySourceParameters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MPA
{
namespace Model
{

  /**
   */
  class CreateIdentitySourceRequest : public MPARequest
  {
  public:
    AWS_MPA_API CreateIdentitySourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIdentitySource"; }

    AWS_MPA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A <code> IdentitySourceParameters</code> object. Contains details for the
     * resource that provides identities to the identity source. For example, an IAM
     * Identity Center instance.</p>
     */
    inline const IdentitySourceParameters& GetIdentitySourceParameters() const { return m_identitySourceParameters; }
    inline bool IdentitySourceParametersHasBeenSet() const { return m_identitySourceParametersHasBeenSet; }
    template<typename IdentitySourceParametersT = IdentitySourceParameters>
    void SetIdentitySourceParameters(IdentitySourceParametersT&& value) { m_identitySourceParametersHasBeenSet = true; m_identitySourceParameters = std::forward<IdentitySourceParametersT>(value); }
    template<typename IdentitySourceParametersT = IdentitySourceParameters>
    CreateIdentitySourceRequest& WithIdentitySourceParameters(IdentitySourceParametersT&& value) { SetIdentitySourceParameters(std::forward<IdentitySourceParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If not provided, the Amazon Web Services populates this
     * field.</p>  <p> <b>What is idempotency?</b> </p> <p>When you make a
     * mutating API request, the request typically returns a result before the
     * operation's asynchronous workflows have completed. Operations might also time
     * out or encounter other server issues before they complete, even though the
     * request has already returned a result. This could make it difficult to determine
     * whether the request succeeded or not, and could lead to multiple retries to
     * ensure that the operation completes successfully. However, if the original
     * request and the subsequent retries are successful, the operation is completed
     * multiple times. This means that you might create more resources than you
     * intended.</p> <p> <i>Idempotency</i> ensures that an API request completes no
     * more than one time. With an idempotent request, if the original request
     * completes successfully, any subsequent retries complete successfully without
     * performing any further actions.</p> 
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateIdentitySourceRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tag you want to attach to the identity source.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateIdentitySourceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateIdentitySourceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    IdentitySourceParameters m_identitySourceParameters;
    bool m_identitySourceParametersHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
