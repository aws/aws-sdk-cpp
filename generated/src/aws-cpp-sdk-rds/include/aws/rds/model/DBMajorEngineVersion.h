/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/SupportedEngineLifecycle.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>This data type is used as a response element in the operation
   * <code>DescribeDBMajorEngineVersions</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBMajorEngineVersion">AWS
   * API Reference</a></p>
   */
  class DBMajorEngineVersion
  {
  public:
    AWS_RDS_API DBMajorEngineVersion() = default;
    AWS_RDS_API DBMajorEngineVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBMajorEngineVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the database engine.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    DBMajorEngineVersion& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major version number of the database engine.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const { return m_majorEngineVersion; }
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }
    template<typename MajorEngineVersionT = Aws::String>
    void SetMajorEngineVersion(MajorEngineVersionT&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::forward<MajorEngineVersionT>(value); }
    template<typename MajorEngineVersionT = Aws::String>
    DBMajorEngineVersion& WithMajorEngineVersion(MajorEngineVersionT&& value) { SetMajorEngineVersion(std::forward<MajorEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the lifecycles supported by this engine for the
     * <code>DescribeDBMajorEngineVersions</code> operation.</p>
     */
    inline const Aws::Vector<SupportedEngineLifecycle>& GetSupportedEngineLifecycles() const { return m_supportedEngineLifecycles; }
    inline bool SupportedEngineLifecyclesHasBeenSet() const { return m_supportedEngineLifecyclesHasBeenSet; }
    template<typename SupportedEngineLifecyclesT = Aws::Vector<SupportedEngineLifecycle>>
    void SetSupportedEngineLifecycles(SupportedEngineLifecyclesT&& value) { m_supportedEngineLifecyclesHasBeenSet = true; m_supportedEngineLifecycles = std::forward<SupportedEngineLifecyclesT>(value); }
    template<typename SupportedEngineLifecyclesT = Aws::Vector<SupportedEngineLifecycle>>
    DBMajorEngineVersion& WithSupportedEngineLifecycles(SupportedEngineLifecyclesT&& value) { SetSupportedEngineLifecycles(std::forward<SupportedEngineLifecyclesT>(value)); return *this;}
    template<typename SupportedEngineLifecyclesT = SupportedEngineLifecycle>
    DBMajorEngineVersion& AddSupportedEngineLifecycles(SupportedEngineLifecyclesT&& value) { m_supportedEngineLifecyclesHasBeenSet = true; m_supportedEngineLifecycles.emplace_back(std::forward<SupportedEngineLifecyclesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet = false;

    Aws::Vector<SupportedEngineLifecycle> m_supportedEngineLifecycles;
    bool m_supportedEngineLifecyclesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
