/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace OAM
{
namespace Model
{

  /**
   * <p>A structure that contains information about one of this source account's
   * links to a monitoring account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/ListLinksItem">AWS
   * API Reference</a></p>
   */
  class ListLinksItem
  {
  public:
    AWS_OAM_API ListLinksItem();
    AWS_OAM_API ListLinksItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API ListLinksItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the link.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ListLinksItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ListLinksItem& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ListLinksItem& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The random ID string that Amazon Web Services generated as part of the link
     * ARN.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ListLinksItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ListLinksItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ListLinksItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label that was assigned to this link at creation, with the variables
     * resolved to their actual values.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }
    inline ListLinksItem& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline ListLinksItem& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline ListLinksItem& WithLabel(const char* value) { SetLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource types supported by this link.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }
    inline ListLinksItem& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}
    inline ListLinksItem& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}
    inline ListLinksItem& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    inline ListLinksItem& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }
    inline ListLinksItem& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the sink that this link is attached to.</p>
     */
    inline const Aws::String& GetSinkArn() const{ return m_sinkArn; }
    inline bool SinkArnHasBeenSet() const { return m_sinkArnHasBeenSet; }
    inline void SetSinkArn(const Aws::String& value) { m_sinkArnHasBeenSet = true; m_sinkArn = value; }
    inline void SetSinkArn(Aws::String&& value) { m_sinkArnHasBeenSet = true; m_sinkArn = std::move(value); }
    inline void SetSinkArn(const char* value) { m_sinkArnHasBeenSet = true; m_sinkArn.assign(value); }
    inline ListLinksItem& WithSinkArn(const Aws::String& value) { SetSinkArn(value); return *this;}
    inline ListLinksItem& WithSinkArn(Aws::String&& value) { SetSinkArn(std::move(value)); return *this;}
    inline ListLinksItem& WithSinkArn(const char* value) { SetSinkArn(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::String m_sinkArn;
    bool m_sinkArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
