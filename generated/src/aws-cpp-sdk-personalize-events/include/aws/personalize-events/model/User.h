/**
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
    AWS_PERSONALIZEEVENTS_API User() = default;
    AWS_PERSONALIZEEVENTS_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID associated with the user.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    User& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
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
    inline const Aws::String& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::String>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::String>
    User& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
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
