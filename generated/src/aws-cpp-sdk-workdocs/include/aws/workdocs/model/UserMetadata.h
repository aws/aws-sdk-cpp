/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the metadata of the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UserMetadata">AWS
   * API Reference</a></p>
   */
  class UserMetadata
  {
  public:
    AWS_WORKDOCS_API UserMetadata() = default;
    AWS_WORKDOCS_API UserMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API UserMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the user.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UserMetadata& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    UserMetadata& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The given name of the user before a rename operation.</p>
     */
    inline const Aws::String& GetGivenName() const { return m_givenName; }
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }
    template<typename GivenNameT = Aws::String>
    void SetGivenName(GivenNameT&& value) { m_givenNameHasBeenSet = true; m_givenName = std::forward<GivenNameT>(value); }
    template<typename GivenNameT = Aws::String>
    UserMetadata& WithGivenName(GivenNameT&& value) { SetGivenName(std::forward<GivenNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The surname of the user.</p>
     */
    inline const Aws::String& GetSurname() const { return m_surname; }
    inline bool SurnameHasBeenSet() const { return m_surnameHasBeenSet; }
    template<typename SurnameT = Aws::String>
    void SetSurname(SurnameT&& value) { m_surnameHasBeenSet = true; m_surname = std::forward<SurnameT>(value); }
    template<typename SurnameT = Aws::String>
    UserMetadata& WithSurname(SurnameT&& value) { SetSurname(std::forward<SurnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the user.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    UserMetadata& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_givenName;
    bool m_givenNameHasBeenSet = false;

    Aws::String m_surname;
    bool m_surnameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
