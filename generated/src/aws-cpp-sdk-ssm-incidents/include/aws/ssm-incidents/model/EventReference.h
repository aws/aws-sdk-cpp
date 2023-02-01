/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>An item referenced in a <code>TimelineEvent</code> that is involved in or
   * somehow associated with an incident. You can specify an Amazon Resource Name
   * (ARN) for an Amazon Web Services resource or a <code>RelatedItem</code>
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/EventReference">AWS
   * API Reference</a></p>
   */
  class EventReference
  {
  public:
    AWS_SSMINCIDENTS_API EventReference();
    AWS_SSMINCIDENTS_API EventReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API EventReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a <code>RelatedItem</code> referenced in a
     * <code>TimelineEvent</code>.</p>
     */
    inline const Aws::String& GetRelatedItemId() const{ return m_relatedItemId; }

    /**
     * <p>The ID of a <code>RelatedItem</code> referenced in a
     * <code>TimelineEvent</code>.</p>
     */
    inline bool RelatedItemIdHasBeenSet() const { return m_relatedItemIdHasBeenSet; }

    /**
     * <p>The ID of a <code>RelatedItem</code> referenced in a
     * <code>TimelineEvent</code>.</p>
     */
    inline void SetRelatedItemId(const Aws::String& value) { m_relatedItemIdHasBeenSet = true; m_relatedItemId = value; }

    /**
     * <p>The ID of a <code>RelatedItem</code> referenced in a
     * <code>TimelineEvent</code>.</p>
     */
    inline void SetRelatedItemId(Aws::String&& value) { m_relatedItemIdHasBeenSet = true; m_relatedItemId = std::move(value); }

    /**
     * <p>The ID of a <code>RelatedItem</code> referenced in a
     * <code>TimelineEvent</code>.</p>
     */
    inline void SetRelatedItemId(const char* value) { m_relatedItemIdHasBeenSet = true; m_relatedItemId.assign(value); }

    /**
     * <p>The ID of a <code>RelatedItem</code> referenced in a
     * <code>TimelineEvent</code>.</p>
     */
    inline EventReference& WithRelatedItemId(const Aws::String& value) { SetRelatedItemId(value); return *this;}

    /**
     * <p>The ID of a <code>RelatedItem</code> referenced in a
     * <code>TimelineEvent</code>.</p>
     */
    inline EventReference& WithRelatedItemId(Aws::String&& value) { SetRelatedItemId(std::move(value)); return *this;}

    /**
     * <p>The ID of a <code>RelatedItem</code> referenced in a
     * <code>TimelineEvent</code>.</p>
     */
    inline EventReference& WithRelatedItemId(const char* value) { SetRelatedItemId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services resource referenced
     * in a <code>TimelineEvent</code>.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services resource referenced
     * in a <code>TimelineEvent</code>.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services resource referenced
     * in a <code>TimelineEvent</code>.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services resource referenced
     * in a <code>TimelineEvent</code>.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services resource referenced
     * in a <code>TimelineEvent</code>.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services resource referenced
     * in a <code>TimelineEvent</code>.</p>
     */
    inline EventReference& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services resource referenced
     * in a <code>TimelineEvent</code>.</p>
     */
    inline EventReference& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services resource referenced
     * in a <code>TimelineEvent</code>.</p>
     */
    inline EventReference& WithResource(const char* value) { SetResource(value); return *this;}

  private:

    Aws::String m_relatedItemId;
    bool m_relatedItemIdHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
