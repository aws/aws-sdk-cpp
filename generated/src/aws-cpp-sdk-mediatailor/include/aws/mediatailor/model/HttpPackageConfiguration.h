/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/Type.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The HTTP package configuration properties for the requested VOD
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/HttpPackageConfiguration">AWS
   * API Reference</a></p>
   */
  class HttpPackageConfiguration
  {
  public:
    AWS_MEDIATAILOR_API HttpPackageConfiguration() = default;
    AWS_MEDIATAILOR_API HttpPackageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API HttpPackageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The relative path to the URL for this VOD source. This is combined with
     * <code>SourceLocation::HttpConfiguration::BaseUrl</code> to form a valid URL.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    HttpPackageConfiguration& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source group. This has to match one of the
     * <code>Channel::Outputs::SourceGroup</code>.</p>
     */
    inline const Aws::String& GetSourceGroup() const { return m_sourceGroup; }
    inline bool SourceGroupHasBeenSet() const { return m_sourceGroupHasBeenSet; }
    template<typename SourceGroupT = Aws::String>
    void SetSourceGroup(SourceGroupT&& value) { m_sourceGroupHasBeenSet = true; m_sourceGroup = std::forward<SourceGroupT>(value); }
    template<typename SourceGroupT = Aws::String>
    HttpPackageConfiguration& WithSourceGroup(SourceGroupT&& value) { SetSourceGroup(std::forward<SourceGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming protocol for this package configuration. Supported values are
     * <code>HLS</code> and <code>DASH</code>.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline HttpPackageConfiguration& WithType(Type value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_sourceGroup;
    bool m_sourceGroupHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
