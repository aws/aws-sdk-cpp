/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The summary of the trust store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/TrustStoreSummary">AWS
   * API Reference</a></p>
   */
  class TrustStoreSummary
  {
  public:
    AWS_WORKSPACESWEB_API TrustStoreSummary();
    AWS_WORKSPACESWEB_API TrustStoreSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API TrustStoreSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = value; }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::move(value); }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn.assign(value); }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline TrustStoreSummary& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline TrustStoreSummary& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline TrustStoreSummary& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}

  private:

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
