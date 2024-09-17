/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetParametersRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetParametersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetParameters"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The names or Amazon Resource Names (ARNs) of the parameters that you want to
     * query. For parameters shared with you from another account, you must use the
     * full ARNs.</p> <p>To query by parameter label, use <code>"Name":
     * "name:label"</code>. To query by parameter version, use <code>"Name":
     * "name:version"</code>.</p>  <p>The results for <code>GetParameters</code>
     * requests are listed in alphabetical order in query responses.</p>  <p>For
     * information about shared parameters, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-shared-parameters.html">Working
     * with shared parameters</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }
    inline GetParametersRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}
    inline GetParametersRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}
    inline GetParametersRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }
    inline GetParametersRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }
    inline GetParametersRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Return decrypted secure string value. Return decrypted values for secure
     * string parameters. This flag is ignored for <code>String</code> and
     * <code>StringList</code> parameter types.</p>
     */
    inline bool GetWithDecryption() const{ return m_withDecryption; }
    inline bool WithDecryptionHasBeenSet() const { return m_withDecryptionHasBeenSet; }
    inline void SetWithDecryption(bool value) { m_withDecryptionHasBeenSet = true; m_withDecryption = value; }
    inline GetParametersRequest& WithWithDecryption(bool value) { SetWithDecryption(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    bool m_withDecryption;
    bool m_withDecryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
