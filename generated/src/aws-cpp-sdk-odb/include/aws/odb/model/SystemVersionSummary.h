/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace odb
{
namespace Model
{

  /**
   * <p>Information about the compatible system versions that can be used with a
   * specific Exadata shape and Grid Infrastructure (GI) version.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/SystemVersionSummary">AWS
   * API Reference</a></p>
   */
  class SystemVersionSummary
  {
  public:
    AWS_ODB_API SystemVersionSummary() = default;
    AWS_ODB_API SystemVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API SystemVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of GI software.</p>
     */
    inline const Aws::String& GetGiVersion() const { return m_giVersion; }
    inline bool GiVersionHasBeenSet() const { return m_giVersionHasBeenSet; }
    template<typename GiVersionT = Aws::String>
    void SetGiVersion(GiVersionT&& value) { m_giVersionHasBeenSet = true; m_giVersion = std::forward<GiVersionT>(value); }
    template<typename GiVersionT = Aws::String>
    SystemVersionSummary& WithGiVersion(GiVersionT&& value) { SetGiVersion(std::forward<GiVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Exadata hardware model.</p>
     */
    inline const Aws::String& GetShape() const { return m_shape; }
    inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
    template<typename ShapeT = Aws::String>
    void SetShape(ShapeT&& value) { m_shapeHasBeenSet = true; m_shape = std::forward<ShapeT>(value); }
    template<typename ShapeT = Aws::String>
    SystemVersionSummary& WithShape(ShapeT&& value) { SetShape(std::forward<ShapeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Exadata system versions that are compatible with the specified Exadata
     * shape and GI version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSystemVersions() const { return m_systemVersions; }
    inline bool SystemVersionsHasBeenSet() const { return m_systemVersionsHasBeenSet; }
    template<typename SystemVersionsT = Aws::Vector<Aws::String>>
    void SetSystemVersions(SystemVersionsT&& value) { m_systemVersionsHasBeenSet = true; m_systemVersions = std::forward<SystemVersionsT>(value); }
    template<typename SystemVersionsT = Aws::Vector<Aws::String>>
    SystemVersionSummary& WithSystemVersions(SystemVersionsT&& value) { SetSystemVersions(std::forward<SystemVersionsT>(value)); return *this;}
    template<typename SystemVersionsT = Aws::String>
    SystemVersionSummary& AddSystemVersions(SystemVersionsT&& value) { m_systemVersionsHasBeenSet = true; m_systemVersions.emplace_back(std::forward<SystemVersionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_giVersion;
    bool m_giVersionHasBeenSet = false;

    Aws::String m_shape;
    bool m_shapeHasBeenSet = false;

    Aws::Vector<Aws::String> m_systemVersions;
    bool m_systemVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
