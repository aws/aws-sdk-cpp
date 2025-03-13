/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Not supported by Neptune.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBClusterOptionGroupStatus">AWS
   * API Reference</a></p>
   */
  class DBClusterOptionGroupStatus
  {
  public:
    AWS_NEPTUNE_API DBClusterOptionGroupStatus() = default;
    AWS_NEPTUNE_API DBClusterOptionGroupStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBClusterOptionGroupStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetDBClusterOptionGroupName() const { return m_dBClusterOptionGroupName; }
    inline bool DBClusterOptionGroupNameHasBeenSet() const { return m_dBClusterOptionGroupNameHasBeenSet; }
    template<typename DBClusterOptionGroupNameT = Aws::String>
    void SetDBClusterOptionGroupName(DBClusterOptionGroupNameT&& value) { m_dBClusterOptionGroupNameHasBeenSet = true; m_dBClusterOptionGroupName = std::forward<DBClusterOptionGroupNameT>(value); }
    template<typename DBClusterOptionGroupNameT = Aws::String>
    DBClusterOptionGroupStatus& WithDBClusterOptionGroupName(DBClusterOptionGroupNameT&& value) { SetDBClusterOptionGroupName(std::forward<DBClusterOptionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DBClusterOptionGroupStatus& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterOptionGroupName;
    bool m_dBClusterOptionGroupNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
