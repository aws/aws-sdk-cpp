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
    AWS_SSM_API DocumentDefaultVersionDescription();
    AWS_SSM_API DocumentDefaultVersionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DocumentDefaultVersionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DocumentDefaultVersionDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DocumentDefaultVersionDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DocumentDefaultVersionDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default version of the document.</p>
     */
    inline const Aws::String& GetDefaultVersion() const{ return m_defaultVersion; }
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }
    inline void SetDefaultVersion(const Aws::String& value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }
    inline void SetDefaultVersion(Aws::String&& value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = std::move(value); }
    inline void SetDefaultVersion(const char* value) { m_defaultVersionHasBeenSet = true; m_defaultVersion.assign(value); }
    inline DocumentDefaultVersionDescription& WithDefaultVersion(const Aws::String& value) { SetDefaultVersion(value); return *this;}
    inline DocumentDefaultVersionDescription& WithDefaultVersion(Aws::String&& value) { SetDefaultVersion(std::move(value)); return *this;}
    inline DocumentDefaultVersionDescription& WithDefaultVersion(const char* value) { SetDefaultVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default version of the artifact associated with the document.</p>
     */
    inline const Aws::String& GetDefaultVersionName() const{ return m_defaultVersionName; }
    inline bool DefaultVersionNameHasBeenSet() const { return m_defaultVersionNameHasBeenSet; }
    inline void SetDefaultVersionName(const Aws::String& value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName = value; }
    inline void SetDefaultVersionName(Aws::String&& value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName = std::move(value); }
    inline void SetDefaultVersionName(const char* value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName.assign(value); }
    inline DocumentDefaultVersionDescription& WithDefaultVersionName(const Aws::String& value) { SetDefaultVersionName(value); return *this;}
    inline DocumentDefaultVersionDescription& WithDefaultVersionName(Aws::String&& value) { SetDefaultVersionName(std::move(value)); return *this;}
    inline DocumentDefaultVersionDescription& WithDefaultVersionName(const char* value) { SetDefaultVersionName(value); return *this;}
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
