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
    AWS_SSM_API AttachmentContent() = default;
    AWS_SSM_API AttachmentContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AttachmentContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an attachment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AttachmentContent& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of an attachment in bytes.</p>
     */
    inline long long GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline AttachmentContent& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cryptographic hash value of the document content.</p>
     */
    inline const Aws::String& GetHash() const { return m_hash; }
    inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
    template<typename HashT = Aws::String>
    void SetHash(HashT&& value) { m_hashHasBeenSet = true; m_hash = std::forward<HashT>(value); }
    template<typename HashT = Aws::String>
    AttachmentContent& WithHash(HashT&& value) { SetHash(std::forward<HashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash algorithm used to calculate the hash value.</p>
     */
    inline AttachmentHashType GetHashType() const { return m_hashType; }
    inline bool HashTypeHasBeenSet() const { return m_hashTypeHasBeenSet; }
    inline void SetHashType(AttachmentHashType value) { m_hashTypeHasBeenSet = true; m_hashType = value; }
    inline AttachmentContent& WithHashType(AttachmentHashType value) { SetHashType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL location of the attachment content.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    AttachmentContent& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_size{0};
    bool m_sizeHasBeenSet = false;

    Aws::String m_hash;
    bool m_hashHasBeenSet = false;

    AttachmentHashType m_hashType{AttachmentHashType::NOT_SET};
    bool m_hashTypeHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
