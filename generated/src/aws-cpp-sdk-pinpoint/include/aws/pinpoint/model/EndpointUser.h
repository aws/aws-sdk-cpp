/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies data for one or more attributes that describe the user who's
   * associated with an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointUser">AWS
   * API Reference</a></p>
   */
  class EndpointUser
  {
  public:
    AWS_PINPOINT_API EndpointUser();
    AWS_PINPOINT_API EndpointUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EndpointUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more custom attributes that describe the user by associating a name
     * with an array of values. For example, the value of an attribute named Interests
     * might be: ["Science", "Music", "Travel"]. You can use these attributes as filter
     * criteria when you create segments. Attribute names are case sensitive.</p> <p>An
     * attribute name can contain up to 50 characters. An attribute value can contain
     * up to 100 characters. When you define the name of a custom attribute, avoid
     * using the following characters: number sign (#), colon (:), question mark (?),
     * backslash (\), and slash (/). The Amazon Pinpoint console can't display
     * attribute names that contain these characters. This restriction doesn't apply to
     * attribute values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>One or more custom attributes that describe the user by associating a name
     * with an array of values. For example, the value of an attribute named Interests
     * might be: ["Science", "Music", "Travel"]. You can use these attributes as filter
     * criteria when you create segments. Attribute names are case sensitive.</p> <p>An
     * attribute name can contain up to 50 characters. An attribute value can contain
     * up to 100 characters. When you define the name of a custom attribute, avoid
     * using the following characters: number sign (#), colon (:), question mark (?),
     * backslash (\), and slash (/). The Amazon Pinpoint console can't display
     * attribute names that contain these characters. This restriction doesn't apply to
     * attribute values.</p>
     */
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }

    /**
     * <p>One or more custom attributes that describe the user by associating a name
     * with an array of values. For example, the value of an attribute named Interests
     * might be: ["Science", "Music", "Travel"]. You can use these attributes as filter
     * criteria when you create segments. Attribute names are case sensitive.</p> <p>An
     * attribute name can contain up to 50 characters. An attribute value can contain
     * up to 100 characters. When you define the name of a custom attribute, avoid
     * using the following characters: number sign (#), colon (:), question mark (?),
     * backslash (\), and slash (/). The Amazon Pinpoint console can't display
     * attribute names that contain these characters. This restriction doesn't apply to
     * attribute values.</p>
     */
    inline void SetUserAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>One or more custom attributes that describe the user by associating a name
     * with an array of values. For example, the value of an attribute named Interests
     * might be: ["Science", "Music", "Travel"]. You can use these attributes as filter
     * criteria when you create segments. Attribute names are case sensitive.</p> <p>An
     * attribute name can contain up to 50 characters. An attribute value can contain
     * up to 100 characters. When you define the name of a custom attribute, avoid
     * using the following characters: number sign (#), colon (:), question mark (?),
     * backslash (\), and slash (/). The Amazon Pinpoint console can't display
     * attribute names that contain these characters. This restriction doesn't apply to
     * attribute values.</p>
     */
    inline void SetUserAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::move(value); }

    /**
     * <p>One or more custom attributes that describe the user by associating a name
     * with an array of values. For example, the value of an attribute named Interests
     * might be: ["Science", "Music", "Travel"]. You can use these attributes as filter
     * criteria when you create segments. Attribute names are case sensitive.</p> <p>An
     * attribute name can contain up to 50 characters. An attribute value can contain
     * up to 100 characters. When you define the name of a custom attribute, avoid
     * using the following characters: number sign (#), colon (:), question mark (?),
     * backslash (\), and slash (/). The Amazon Pinpoint console can't display
     * attribute names that contain these characters. This restriction doesn't apply to
     * attribute values.</p>
     */
    inline EndpointUser& WithUserAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>One or more custom attributes that describe the user by associating a name
     * with an array of values. For example, the value of an attribute named Interests
     * might be: ["Science", "Music", "Travel"]. You can use these attributes as filter
     * criteria when you create segments. Attribute names are case sensitive.</p> <p>An
     * attribute name can contain up to 50 characters. An attribute value can contain
     * up to 100 characters. When you define the name of a custom attribute, avoid
     * using the following characters: number sign (#), colon (:), question mark (?),
     * backslash (\), and slash (/). The Amazon Pinpoint console can't display
     * attribute names that contain these characters. This restriction doesn't apply to
     * attribute values.</p>
     */
    inline EndpointUser& WithUserAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetUserAttributes(std::move(value)); return *this;}

    /**
     * <p>One or more custom attributes that describe the user by associating a name
     * with an array of values. For example, the value of an attribute named Interests
     * might be: ["Science", "Music", "Travel"]. You can use these attributes as filter
     * criteria when you create segments. Attribute names are case sensitive.</p> <p>An
     * attribute name can contain up to 50 characters. An attribute value can contain
     * up to 100 characters. When you define the name of a custom attribute, avoid
     * using the following characters: number sign (#), colon (:), question mark (?),
     * backslash (\), and slash (/). The Amazon Pinpoint console can't display
     * attribute names that contain these characters. This restriction doesn't apply to
     * attribute values.</p>
     */
    inline EndpointUser& AddUserAttributes(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, value); return *this; }

    /**
     * <p>One or more custom attributes that describe the user by associating a name
     * with an array of values. For example, the value of an attribute named Interests
     * might be: ["Science", "Music", "Travel"]. You can use these attributes as filter
     * criteria when you create segments. Attribute names are case sensitive.</p> <p>An
     * attribute name can contain up to 50 characters. An attribute value can contain
     * up to 100 characters. When you define the name of a custom attribute, avoid
     * using the following characters: number sign (#), colon (:), question mark (?),
     * backslash (\), and slash (/). The Amazon Pinpoint console can't display
     * attribute names that contain these characters. This restriction doesn't apply to
     * attribute values.</p>
     */
    inline EndpointUser& AddUserAttributes(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more custom attributes that describe the user by associating a name
     * with an array of values. For example, the value of an attribute named Interests
     * might be: ["Science", "Music", "Travel"]. You can use these attributes as filter
     * criteria when you create segments. Attribute names are case sensitive.</p> <p>An
     * attribute name can contain up to 50 characters. An attribute value can contain
     * up to 100 characters. When you define the name of a custom attribute, avoid
     * using the following characters: number sign (#), colon (:), question mark (?),
     * backslash (\), and slash (/). The Amazon Pinpoint console can't display
     * attribute names that contain these characters. This restriction doesn't apply to
     * attribute values.</p>
     */
    inline EndpointUser& AddUserAttributes(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more custom attributes that describe the user by associating a name
     * with an array of values. For example, the value of an attribute named Interests
     * might be: ["Science", "Music", "Travel"]. You can use these attributes as filter
     * criteria when you create segments. Attribute names are case sensitive.</p> <p>An
     * attribute name can contain up to 50 characters. An attribute value can contain
     * up to 100 characters. When you define the name of a custom attribute, avoid
     * using the following characters: number sign (#), colon (:), question mark (?),
     * backslash (\), and slash (/). The Amazon Pinpoint console can't display
     * attribute names that contain these characters. This restriction doesn't apply to
     * attribute values.</p>
     */
    inline EndpointUser& AddUserAttributes(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more custom attributes that describe the user by associating a name
     * with an array of values. For example, the value of an attribute named Interests
     * might be: ["Science", "Music", "Travel"]. You can use these attributes as filter
     * criteria when you create segments. Attribute names are case sensitive.</p> <p>An
     * attribute name can contain up to 50 characters. An attribute value can contain
     * up to 100 characters. When you define the name of a custom attribute, avoid
     * using the following characters: number sign (#), colon (:), question mark (?),
     * backslash (\), and slash (/). The Amazon Pinpoint console can't display
     * attribute names that contain these characters. This restriction doesn't apply to
     * attribute values.</p>
     */
    inline EndpointUser& AddUserAttributes(const char* key, Aws::Vector<Aws::String>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more custom attributes that describe the user by associating a name
     * with an array of values. For example, the value of an attribute named Interests
     * might be: ["Science", "Music", "Travel"]. You can use these attributes as filter
     * criteria when you create segments. Attribute names are case sensitive.</p> <p>An
     * attribute name can contain up to 50 characters. An attribute value can contain
     * up to 100 characters. When you define the name of a custom attribute, avoid
     * using the following characters: number sign (#), colon (:), question mark (?),
     * backslash (\), and slash (/). The Amazon Pinpoint console can't display
     * attribute names that contain these characters. This restriction doesn't apply to
     * attribute values.</p>
     */
    inline EndpointUser& AddUserAttributes(const char* key, const Aws::Vector<Aws::String>& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, value); return *this; }


    /**
     * <p>The unique identifier for the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline EndpointUser& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline EndpointUser& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline EndpointUser& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_userAttributes;
    bool m_userAttributesHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
