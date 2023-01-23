/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   * <p>A request to create an <a>XssMatchSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateXssMatchSetRequest">AWS
   * API Reference</a></p>
   */
  class CreateXssMatchSetRequest : public WAFRequest
  {
  public:
    AWS_WAF_API CreateXssMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateXssMatchSet"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A friendly name or description for the <a>XssMatchSet</a> that you're
     * creating. You can't change <code>Name</code> after you create the
     * <code>XssMatchSet</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description for the <a>XssMatchSet</a> that you're
     * creating. You can't change <code>Name</code> after you create the
     * <code>XssMatchSet</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name or description for the <a>XssMatchSet</a> that you're
     * creating. You can't change <code>Name</code> after you create the
     * <code>XssMatchSet</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description for the <a>XssMatchSet</a> that you're
     * creating. You can't change <code>Name</code> after you create the
     * <code>XssMatchSet</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description for the <a>XssMatchSet</a> that you're
     * creating. You can't change <code>Name</code> after you create the
     * <code>XssMatchSet</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description for the <a>XssMatchSet</a> that you're
     * creating. You can't change <code>Name</code> after you create the
     * <code>XssMatchSet</code>.</p>
     */
    inline CreateXssMatchSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description for the <a>XssMatchSet</a> that you're
     * creating. You can't change <code>Name</code> after you create the
     * <code>XssMatchSet</code>.</p>
     */
    inline CreateXssMatchSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description for the <a>XssMatchSet</a> that you're
     * creating. You can't change <code>Name</code> after you create the
     * <code>XssMatchSet</code>.</p>
     */
    inline CreateXssMatchSetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::move(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline CreateXssMatchSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline CreateXssMatchSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline CreateXssMatchSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
