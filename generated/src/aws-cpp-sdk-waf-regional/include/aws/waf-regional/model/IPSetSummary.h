﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>Contains the identifier
   * and the name of the <code>IPSet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/IPSetSummary">AWS
   * API Reference</a></p>
   */
  class IPSetSummary
  {
  public:
    AWS_WAFREGIONAL_API IPSetSummary();
    AWS_WAFREGIONAL_API IPSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API IPSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>IPSetId</code> for an <a>IPSet</a>. You can use
     * <code>IPSetId</code> in a <a>GetIPSet</a> request to get detailed information
     * about an <a>IPSet</a>.</p>
     */
    inline const Aws::String& GetIPSetId() const{ return m_iPSetId; }
    inline bool IPSetIdHasBeenSet() const { return m_iPSetIdHasBeenSet; }
    inline void SetIPSetId(const Aws::String& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = value; }
    inline void SetIPSetId(Aws::String&& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = std::move(value); }
    inline void SetIPSetId(const char* value) { m_iPSetIdHasBeenSet = true; m_iPSetId.assign(value); }
    inline IPSetSummary& WithIPSetId(const Aws::String& value) { SetIPSetId(value); return *this;}
    inline IPSetSummary& WithIPSetId(Aws::String&& value) { SetIPSetId(std::move(value)); return *this;}
    inline IPSetSummary& WithIPSetId(const char* value) { SetIPSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline IPSetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline IPSetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline IPSetSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_iPSetId;
    bool m_iPSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
