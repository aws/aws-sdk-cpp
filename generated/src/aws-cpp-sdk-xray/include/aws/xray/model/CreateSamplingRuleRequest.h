/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/xray/model/SamplingRule.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/Tag.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class CreateSamplingRuleRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API CreateSamplingRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSamplingRule"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The rule definition.</p>
     */
    inline const SamplingRule& GetSamplingRule() const{ return m_samplingRule; }

    /**
     * <p>The rule definition.</p>
     */
    inline bool SamplingRuleHasBeenSet() const { return m_samplingRuleHasBeenSet; }

    /**
     * <p>The rule definition.</p>
     */
    inline void SetSamplingRule(const SamplingRule& value) { m_samplingRuleHasBeenSet = true; m_samplingRule = value; }

    /**
     * <p>The rule definition.</p>
     */
    inline void SetSamplingRule(SamplingRule&& value) { m_samplingRuleHasBeenSet = true; m_samplingRule = std::move(value); }

    /**
     * <p>The rule definition.</p>
     */
    inline CreateSamplingRuleRequest& WithSamplingRule(const SamplingRule& value) { SetSamplingRule(value); return *this;}

    /**
     * <p>The rule definition.</p>
     */
    inline CreateSamplingRuleRequest& WithSamplingRule(SamplingRule&& value) { SetSamplingRule(std::move(value)); return *this;}


    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline CreateSamplingRuleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline CreateSamplingRuleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline CreateSamplingRuleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline CreateSamplingRuleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    SamplingRule m_samplingRule;
    bool m_samplingRuleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
