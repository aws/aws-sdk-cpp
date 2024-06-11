/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/IdentityProviderType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The summary of the identity provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/IdentityProviderSummary">AWS
   * API Reference</a></p>
   */
  class IdentityProviderSummary
  {
  public:
    AWS_WORKSPACESWEB_API IdentityProviderSummary();
    AWS_WORKSPACESWEB_API IdentityProviderSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API IdentityProviderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline const Aws::String& GetIdentityProviderArn() const{ return m_identityProviderArn; }
    inline bool IdentityProviderArnHasBeenSet() const { return m_identityProviderArnHasBeenSet; }
    inline void SetIdentityProviderArn(const Aws::String& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = value; }
    inline void SetIdentityProviderArn(Aws::String&& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = std::move(value); }
    inline void SetIdentityProviderArn(const char* value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn.assign(value); }
    inline IdentityProviderSummary& WithIdentityProviderArn(const Aws::String& value) { SetIdentityProviderArn(value); return *this;}
    inline IdentityProviderSummary& WithIdentityProviderArn(Aws::String&& value) { SetIdentityProviderArn(std::move(value)); return *this;}
    inline IdentityProviderSummary& WithIdentityProviderArn(const char* value) { SetIdentityProviderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity provider name.</p>
     */
    inline const Aws::String& GetIdentityProviderName() const{ return m_identityProviderName; }
    inline bool IdentityProviderNameHasBeenSet() const { return m_identityProviderNameHasBeenSet; }
    inline void SetIdentityProviderName(const Aws::String& value) { m_identityProviderNameHasBeenSet = true; m_identityProviderName = value; }
    inline void SetIdentityProviderName(Aws::String&& value) { m_identityProviderNameHasBeenSet = true; m_identityProviderName = std::move(value); }
    inline void SetIdentityProviderName(const char* value) { m_identityProviderNameHasBeenSet = true; m_identityProviderName.assign(value); }
    inline IdentityProviderSummary& WithIdentityProviderName(const Aws::String& value) { SetIdentityProviderName(value); return *this;}
    inline IdentityProviderSummary& WithIdentityProviderName(Aws::String&& value) { SetIdentityProviderName(std::move(value)); return *this;}
    inline IdentityProviderSummary& WithIdentityProviderName(const char* value) { SetIdentityProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity provider type.</p>
     */
    inline const IdentityProviderType& GetIdentityProviderType() const{ return m_identityProviderType; }
    inline bool IdentityProviderTypeHasBeenSet() const { return m_identityProviderTypeHasBeenSet; }
    inline void SetIdentityProviderType(const IdentityProviderType& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = value; }
    inline void SetIdentityProviderType(IdentityProviderType&& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = std::move(value); }
    inline IdentityProviderSummary& WithIdentityProviderType(const IdentityProviderType& value) { SetIdentityProviderType(value); return *this;}
    inline IdentityProviderSummary& WithIdentityProviderType(IdentityProviderType&& value) { SetIdentityProviderType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityProviderArn;
    bool m_identityProviderArnHasBeenSet = false;

    Aws::String m_identityProviderName;
    bool m_identityProviderNameHasBeenSet = false;

    IdentityProviderType m_identityProviderType;
    bool m_identityProviderTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
