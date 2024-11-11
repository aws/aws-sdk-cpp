/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The configuration parameters to enable access to the key store required by
   * the package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/KeyStoreAccessOption">AWS
   * API Reference</a></p>
   */
  class KeyStoreAccessOption
  {
  public:
    AWS_OPENSEARCHSERVICE_API KeyStoreAccessOption();
    AWS_OPENSEARCHSERVICE_API KeyStoreAccessOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API KeyStoreAccessOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Role ARN to access the KeyStore Key</p>
     */
    inline const Aws::String& GetKeyAccessRoleArn() const{ return m_keyAccessRoleArn; }
    inline bool KeyAccessRoleArnHasBeenSet() const { return m_keyAccessRoleArnHasBeenSet; }
    inline void SetKeyAccessRoleArn(const Aws::String& value) { m_keyAccessRoleArnHasBeenSet = true; m_keyAccessRoleArn = value; }
    inline void SetKeyAccessRoleArn(Aws::String&& value) { m_keyAccessRoleArnHasBeenSet = true; m_keyAccessRoleArn = std::move(value); }
    inline void SetKeyAccessRoleArn(const char* value) { m_keyAccessRoleArnHasBeenSet = true; m_keyAccessRoleArn.assign(value); }
    inline KeyStoreAccessOption& WithKeyAccessRoleArn(const Aws::String& value) { SetKeyAccessRoleArn(value); return *this;}
    inline KeyStoreAccessOption& WithKeyAccessRoleArn(Aws::String&& value) { SetKeyAccessRoleArn(std::move(value)); return *this;}
    inline KeyStoreAccessOption& WithKeyAccessRoleArn(const char* value) { SetKeyAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This indicates whether Key Store access is enabled </p>
     */
    inline bool GetKeyStoreAccessEnabled() const{ return m_keyStoreAccessEnabled; }
    inline bool KeyStoreAccessEnabledHasBeenSet() const { return m_keyStoreAccessEnabledHasBeenSet; }
    inline void SetKeyStoreAccessEnabled(bool value) { m_keyStoreAccessEnabledHasBeenSet = true; m_keyStoreAccessEnabled = value; }
    inline KeyStoreAccessOption& WithKeyStoreAccessEnabled(bool value) { SetKeyStoreAccessEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_keyAccessRoleArn;
    bool m_keyAccessRoleArnHasBeenSet = false;

    bool m_keyStoreAccessEnabled;
    bool m_keyStoreAccessEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
