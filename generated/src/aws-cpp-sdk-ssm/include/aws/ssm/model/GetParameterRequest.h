/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetParameterRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetParameterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetParameter"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the parameter that you want to
     * query. For parameters shared with you from another account, you must use the
     * full ARN.</p> <p>To query by parameter label, use <code>"Name":
     * "name:label"</code>. To query by parameter version, use <code>"Name":
     * "name:version"</code>.</p> <p>For more information about shared parameters, see
     * <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-shared-parameters.html">Working
     * with shared parameters</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetParameterRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return decrypted values for secure string parameters. This flag is ignored
     * for <code>String</code> and <code>StringList</code> parameter types.</p>
     */
    inline bool GetWithDecryption() const { return m_withDecryption; }
    inline bool WithDecryptionHasBeenSet() const { return m_withDecryptionHasBeenSet; }
    inline void SetWithDecryption(bool value) { m_withDecryptionHasBeenSet = true; m_withDecryption = value; }
    inline GetParameterRequest& WithWithDecryption(bool value) { SetWithDecryption(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_withDecryption{false};
    bool m_withDecryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
