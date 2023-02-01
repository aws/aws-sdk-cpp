/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object used to specify a list or topic to which an email belongs, which
   * will be used when a contact chooses to unsubscribe.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListManagementOptions">AWS
   * API Reference</a></p>
   */
  class ListManagementOptions
  {
  public:
    AWS_SESV2_API ListManagementOptions();
    AWS_SESV2_API ListManagementOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ListManagementOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the contact list.</p>
     */
    inline const Aws::String& GetContactListName() const{ return m_contactListName; }

    /**
     * <p>The name of the contact list.</p>
     */
    inline bool ContactListNameHasBeenSet() const { return m_contactListNameHasBeenSet; }

    /**
     * <p>The name of the contact list.</p>
     */
    inline void SetContactListName(const Aws::String& value) { m_contactListNameHasBeenSet = true; m_contactListName = value; }

    /**
     * <p>The name of the contact list.</p>
     */
    inline void SetContactListName(Aws::String&& value) { m_contactListNameHasBeenSet = true; m_contactListName = std::move(value); }

    /**
     * <p>The name of the contact list.</p>
     */
    inline void SetContactListName(const char* value) { m_contactListNameHasBeenSet = true; m_contactListName.assign(value); }

    /**
     * <p>The name of the contact list.</p>
     */
    inline ListManagementOptions& WithContactListName(const Aws::String& value) { SetContactListName(value); return *this;}

    /**
     * <p>The name of the contact list.</p>
     */
    inline ListManagementOptions& WithContactListName(Aws::String&& value) { SetContactListName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact list.</p>
     */
    inline ListManagementOptions& WithContactListName(const char* value) { SetContactListName(value); return *this;}


    /**
     * <p>The name of the topic.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }

    /**
     * <p>The name of the topic.</p>
     */
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }

    /**
     * <p>The name of the topic.</p>
     */
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }

    /**
     * <p>The name of the topic.</p>
     */
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }

    /**
     * <p>The name of the topic.</p>
     */
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }

    /**
     * <p>The name of the topic.</p>
     */
    inline ListManagementOptions& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}

    /**
     * <p>The name of the topic.</p>
     */
    inline ListManagementOptions& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}

    /**
     * <p>The name of the topic.</p>
     */
    inline ListManagementOptions& WithTopicName(const char* value) { SetTopicName(value); return *this;}

  private:

    Aws::String m_contactListName;
    bool m_contactListNameHasBeenSet = false;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
