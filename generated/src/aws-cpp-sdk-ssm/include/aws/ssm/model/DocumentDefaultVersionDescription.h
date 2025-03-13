/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A default version of a document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentDefaultVersionDescription">AWS
   * API Reference</a></p>
   */
  class DocumentDefaultVersionDescription
  {
  public:
    AWS_SSM_API DocumentDefaultVersionDescription() = default;
    AWS_SSM_API DocumentDefaultVersionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DocumentDefaultVersionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the document.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DocumentDefaultVersionDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default version of the document.</p>
     */
    inline const Aws::String& GetDefaultVersion() const { return m_defaultVersion; }
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }
    template<typename DefaultVersionT = Aws::String>
    void SetDefaultVersion(DefaultVersionT&& value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = std::forward<DefaultVersionT>(value); }
    template<typename DefaultVersionT = Aws::String>
    DocumentDefaultVersionDescription& WithDefaultVersion(DefaultVersionT&& value) { SetDefaultVersion(std::forward<DefaultVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default version of the artifact associated with the document.</p>
     */
    inline const Aws::String& GetDefaultVersionName() const { return m_defaultVersionName; }
    inline bool DefaultVersionNameHasBeenSet() const { return m_defaultVersionNameHasBeenSet; }
    template<typename DefaultVersionNameT = Aws::String>
    void SetDefaultVersionName(DefaultVersionNameT&& value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName = std::forward<DefaultVersionNameT>(value); }
    template<typename DefaultVersionNameT = Aws::String>
    DocumentDefaultVersionDescription& WithDefaultVersionName(DefaultVersionNameT&& value) { SetDefaultVersionName(std::forward<DefaultVersionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_defaultVersion;
    bool m_defaultVersionHasBeenSet = false;

    Aws::String m_defaultVersionName;
    bool m_defaultVersionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
