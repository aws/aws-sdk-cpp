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
   * <p>The status of the DB parameter group.</p> <p>This data type is used as a
   * response element in the following actions:</p> <ul> <li> <p>
   * <a>CreateDBInstance</a> </p> </li> <li> <p> <a>DeleteDBInstance</a> </p> </li>
   * <li> <p> <a>ModifyDBInstance</a> </p> </li> <li> <p> <a>RebootDBInstance</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBParameterGroupStatus">AWS
   * API Reference</a></p>
   */
  class DBParameterGroupStatus
  {
  public:
    AWS_NEPTUNE_API DBParameterGroupStatus();
    AWS_NEPTUNE_API DBParameterGroupStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBParameterGroupStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the DP parameter group.</p>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }
    inline DBParameterGroupStatus& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}
    inline DBParameterGroupStatus& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}
    inline DBParameterGroupStatus& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of parameter updates.</p>
     */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }
    inline void SetParameterApplyStatus(Aws::String&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::move(value); }
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }
    inline DBParameterGroupStatus& WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}
    inline DBParameterGroupStatus& WithParameterApplyStatus(Aws::String&& value) { SetParameterApplyStatus(std::move(value)); return *this;}
    inline DBParameterGroupStatus& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
