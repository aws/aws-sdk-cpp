/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class GetRandomPasswordRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API GetRandomPasswordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRandomPassword"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The length of the password. If you don't include this parameter, the default
     * length is 32 characters.</p>
     */
    inline long long GetPasswordLength() const{ return m_passwordLength; }
    inline bool PasswordLengthHasBeenSet() const { return m_passwordLengthHasBeenSet; }
    inline void SetPasswordLength(long long value) { m_passwordLengthHasBeenSet = true; m_passwordLength = value; }
    inline GetRandomPasswordRequest& WithPasswordLength(long long value) { SetPasswordLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string of the characters that you don't want in the password.</p>
     */
    inline const Aws::String& GetExcludeCharacters() const{ return m_excludeCharacters; }
    inline bool ExcludeCharactersHasBeenSet() const { return m_excludeCharactersHasBeenSet; }
    inline void SetExcludeCharacters(const Aws::String& value) { m_excludeCharactersHasBeenSet = true; m_excludeCharacters = value; }
    inline void SetExcludeCharacters(Aws::String&& value) { m_excludeCharactersHasBeenSet = true; m_excludeCharacters = std::move(value); }
    inline void SetExcludeCharacters(const char* value) { m_excludeCharactersHasBeenSet = true; m_excludeCharacters.assign(value); }
    inline GetRandomPasswordRequest& WithExcludeCharacters(const Aws::String& value) { SetExcludeCharacters(value); return *this;}
    inline GetRandomPasswordRequest& WithExcludeCharacters(Aws::String&& value) { SetExcludeCharacters(std::move(value)); return *this;}
    inline GetRandomPasswordRequest& WithExcludeCharacters(const char* value) { SetExcludeCharacters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to exclude numbers from the password. If you don't include
     * this switch, the password can contain numbers.</p>
     */
    inline bool GetExcludeNumbers() const{ return m_excludeNumbers; }
    inline bool ExcludeNumbersHasBeenSet() const { return m_excludeNumbersHasBeenSet; }
    inline void SetExcludeNumbers(bool value) { m_excludeNumbersHasBeenSet = true; m_excludeNumbers = value; }
    inline GetRandomPasswordRequest& WithExcludeNumbers(bool value) { SetExcludeNumbers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to exclude the following punctuation characters from the
     * password: <code>! " # $ % &amp; ' ( ) * + , - . / : ; &lt; = &gt; ? @ [ \ ] ^ _
     * ` { | } ~</code>. If you don't include this switch, the password can contain
     * punctuation.</p>
     */
    inline bool GetExcludePunctuation() const{ return m_excludePunctuation; }
    inline bool ExcludePunctuationHasBeenSet() const { return m_excludePunctuationHasBeenSet; }
    inline void SetExcludePunctuation(bool value) { m_excludePunctuationHasBeenSet = true; m_excludePunctuation = value; }
    inline GetRandomPasswordRequest& WithExcludePunctuation(bool value) { SetExcludePunctuation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to exclude uppercase letters from the password. If you
     * don't include this switch, the password can contain uppercase letters.</p>
     */
    inline bool GetExcludeUppercase() const{ return m_excludeUppercase; }
    inline bool ExcludeUppercaseHasBeenSet() const { return m_excludeUppercaseHasBeenSet; }
    inline void SetExcludeUppercase(bool value) { m_excludeUppercaseHasBeenSet = true; m_excludeUppercase = value; }
    inline GetRandomPasswordRequest& WithExcludeUppercase(bool value) { SetExcludeUppercase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to exclude lowercase letters from the password. If you
     * don't include this switch, the password can contain lowercase letters.</p>
     */
    inline bool GetExcludeLowercase() const{ return m_excludeLowercase; }
    inline bool ExcludeLowercaseHasBeenSet() const { return m_excludeLowercaseHasBeenSet; }
    inline void SetExcludeLowercase(bool value) { m_excludeLowercaseHasBeenSet = true; m_excludeLowercase = value; }
    inline GetRandomPasswordRequest& WithExcludeLowercase(bool value) { SetExcludeLowercase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include the space character. If you include this switch,
     * the password can contain space characters.</p>
     */
    inline bool GetIncludeSpace() const{ return m_includeSpace; }
    inline bool IncludeSpaceHasBeenSet() const { return m_includeSpaceHasBeenSet; }
    inline void SetIncludeSpace(bool value) { m_includeSpaceHasBeenSet = true; m_includeSpace = value; }
    inline GetRandomPasswordRequest& WithIncludeSpace(bool value) { SetIncludeSpace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include at least one upper and lowercase letter, one
     * number, and one punctuation. If you don't include this switch, the password
     * contains at least one of every character type.</p>
     */
    inline bool GetRequireEachIncludedType() const{ return m_requireEachIncludedType; }
    inline bool RequireEachIncludedTypeHasBeenSet() const { return m_requireEachIncludedTypeHasBeenSet; }
    inline void SetRequireEachIncludedType(bool value) { m_requireEachIncludedTypeHasBeenSet = true; m_requireEachIncludedType = value; }
    inline GetRandomPasswordRequest& WithRequireEachIncludedType(bool value) { SetRequireEachIncludedType(value); return *this;}
    ///@}
  private:

    long long m_passwordLength;
    bool m_passwordLengthHasBeenSet = false;

    Aws::String m_excludeCharacters;
    bool m_excludeCharactersHasBeenSet = false;

    bool m_excludeNumbers;
    bool m_excludeNumbersHasBeenSet = false;

    bool m_excludePunctuation;
    bool m_excludePunctuationHasBeenSet = false;

    bool m_excludeUppercase;
    bool m_excludeUppercaseHasBeenSet = false;

    bool m_excludeLowercase;
    bool m_excludeLowercaseHasBeenSet = false;

    bool m_includeSpace;
    bool m_includeSpaceHasBeenSet = false;

    bool m_requireEachIncludedType;
    bool m_requireEachIncludedTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
