﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
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
namespace PersonalizeEvents
{
namespace Model
{

  /**
   * <p>Represents user metadata added to a Users dataset using the
   * <code>PutUsers</code> API. For more information see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/importing-users.html">Importing
   * users individually</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/User">AWS
   * API Reference</a></p>
   */
  class User
  {
  public:
    AWS_PERSONALIZEEVENTS_API User();
    AWS_PERSONALIZEEVENTS_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID associated with the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline User& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline User& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline User& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string map of user-specific metadata. Each element in the map consists of a
     * key-value pair. For example, <code>{"numberOfVideosWatched": "45"}</code>.</p>
     * <p>The keys use camel case names that match the fields in the schema for the
     * Users dataset. In the previous example, the <code>numberOfVideosWatched</code>
     * matches the 'NUMBER_OF_VIDEOS_WATCHED' field defined in the Users schema. For
     * categorical string data, to include multiple categories for a single user,
     * separate each category with a pipe separator (<code>|</code>). For example,
     * <code>\"Member|Frequent shopper\"</code>.</p>
     */
    inline const Aws::String& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline void SetProperties(const char* value) { m_propertiesHasBeenSet = true; m_properties.assign(value); }
    inline User& WithProperties(const Aws::String& value) { SetProperties(value); return *this;}
    inline User& WithProperties(Aws::String&& value) { SetProperties(std::move(value)); return *this;}
    inline User& WithProperties(const char* value) { SetProperties(value); return *this;}
    ///@}
  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
