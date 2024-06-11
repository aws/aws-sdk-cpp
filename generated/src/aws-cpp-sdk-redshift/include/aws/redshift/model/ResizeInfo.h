﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a resize operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ResizeInfo">AWS
   * API Reference</a></p>
   */
  class ResizeInfo
  {
  public:
    AWS_REDSHIFT_API ResizeInfo();
    AWS_REDSHIFT_API ResizeInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ResizeInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Returns the value <code>ClassicResize</code>.</p>
     */
    inline const Aws::String& GetResizeType() const{ return m_resizeType; }
    inline bool ResizeTypeHasBeenSet() const { return m_resizeTypeHasBeenSet; }
    inline void SetResizeType(const Aws::String& value) { m_resizeTypeHasBeenSet = true; m_resizeType = value; }
    inline void SetResizeType(Aws::String&& value) { m_resizeTypeHasBeenSet = true; m_resizeType = std::move(value); }
    inline void SetResizeType(const char* value) { m_resizeTypeHasBeenSet = true; m_resizeType.assign(value); }
    inline ResizeInfo& WithResizeType(const Aws::String& value) { SetResizeType(value); return *this;}
    inline ResizeInfo& WithResizeType(Aws::String&& value) { SetResizeType(std::move(value)); return *this;}
    inline ResizeInfo& WithResizeType(const char* value) { SetResizeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating if the resize operation can be cancelled.</p>
     */
    inline bool GetAllowCancelResize() const{ return m_allowCancelResize; }
    inline bool AllowCancelResizeHasBeenSet() const { return m_allowCancelResizeHasBeenSet; }
    inline void SetAllowCancelResize(bool value) { m_allowCancelResizeHasBeenSet = true; m_allowCancelResize = value; }
    inline ResizeInfo& WithAllowCancelResize(bool value) { SetAllowCancelResize(value); return *this;}
    ///@}
  private:

    Aws::String m_resizeType;
    bool m_resizeTypeHasBeenSet = false;

    bool m_allowCancelResize;
    bool m_allowCancelResizeHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
