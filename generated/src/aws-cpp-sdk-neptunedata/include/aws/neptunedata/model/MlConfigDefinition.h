/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>Contains a Neptune ML configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/MlConfigDefinition">AWS
   * API Reference</a></p>
   */
  class MlConfigDefinition
  {
  public:
    AWS_NEPTUNEDATA_API MlConfigDefinition();
    AWS_NEPTUNEDATA_API MlConfigDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API MlConfigDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The configuration name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The configuration name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The configuration name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The configuration name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The configuration name.</p>
     */
    inline MlConfigDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The configuration name.</p>
     */
    inline MlConfigDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The configuration name.</p>
     */
    inline MlConfigDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN for the configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the configuration.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN for the configuration.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN for the configuration.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN for the configuration.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN for the configuration.</p>
     */
    inline MlConfigDefinition& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the configuration.</p>
     */
    inline MlConfigDefinition& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the configuration.</p>
     */
    inline MlConfigDefinition& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
