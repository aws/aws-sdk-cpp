/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AttachmentHashType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A structure that includes attributes that describe a document
   * attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AttachmentContent">AWS
   * API Reference</a></p>
   */
  class AttachmentContent
  {
  public:
    AWS_SSM_API AttachmentContent();
    AWS_SSM_API AttachmentContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AttachmentContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an attachment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AttachmentContent& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AttachmentContent& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AttachmentContent& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of an attachment in bytes.</p>
     */
    inline long long GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline AttachmentContent& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cryptographic hash value of the document content.</p>
     */
    inline const Aws::String& GetHash() const{ return m_hash; }
    inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
    inline void SetHash(const Aws::String& value) { m_hashHasBeenSet = true; m_hash = value; }
    inline void SetHash(Aws::String&& value) { m_hashHasBeenSet = true; m_hash = std::move(value); }
    inline void SetHash(const char* value) { m_hashHasBeenSet = true; m_hash.assign(value); }
    inline AttachmentContent& WithHash(const Aws::String& value) { SetHash(value); return *this;}
    inline AttachmentContent& WithHash(Aws::String&& value) { SetHash(std::move(value)); return *this;}
    inline AttachmentContent& WithHash(const char* value) { SetHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash algorithm used to calculate the hash value.</p>
     */
    inline const AttachmentHashType& GetHashType() const{ return m_hashType; }
    inline bool HashTypeHasBeenSet() const { return m_hashTypeHasBeenSet; }
    inline void SetHashType(const AttachmentHashType& value) { m_hashTypeHasBeenSet = true; m_hashType = value; }
    inline void SetHashType(AttachmentHashType&& value) { m_hashTypeHasBeenSet = true; m_hashType = std::move(value); }
    inline AttachmentContent& WithHashType(const AttachmentHashType& value) { SetHashType(value); return *this;}
    inline AttachmentContent& WithHashType(AttachmentHashType&& value) { SetHashType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL location of the attachment content.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline AttachmentContent& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline AttachmentContent& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline AttachmentContent& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;

    Aws::String m_hash;
    bool m_hashHasBeenSet = false;

    AttachmentHashType m_hashType;
    bool m_hashTypeHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
