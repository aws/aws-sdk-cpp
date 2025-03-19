/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Container element that identifies who initiated the multipart upload.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Initiator">AWS API
   * Reference</a></p>
   */
  class Initiator
  {
  public:
    AWS_S3_API Initiator() = default;
    AWS_S3_API Initiator(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API Initiator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>If the principal is an Amazon Web Services account, it provides the Canonical
     * User ID. If the principal is an IAM User, it provides a user ARN value.</p>
     *  <p> <b>Directory buckets</b> - If the principal is an Amazon Web Services
     * account, it provides the Amazon Web Services account ID. If the principal is an
     * IAM User, it provides a user ARN value.</p> 
     */
    inline const Aws::String& GetID() const { return m_iD; }
    inline bool IDHasBeenSet() const { return m_iDHasBeenSet; }
    template<typename IDT = Aws::String>
    void SetID(IDT&& value) { m_iDHasBeenSet = true; m_iD = std::forward<IDT>(value); }
    template<typename IDT = Aws::String>
    Initiator& WithID(IDT&& value) { SetID(std::forward<IDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Principal.</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Initiator& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_iD;
    bool m_iDHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
