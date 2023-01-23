/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
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
namespace AppRegistry
{
namespace Model
{

  /**
   * <p> The definition of <code>tagQuery</code>. Specifies which resources are
   * associated with an application. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/TagQueryConfiguration">AWS
   * API Reference</a></p>
   */
  class TagQueryConfiguration
  {
  public:
    AWS_APPREGISTRY_API TagQueryConfiguration();
    AWS_APPREGISTRY_API TagQueryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API TagQueryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Condition in the IAM policy that associates resources to an application.
     * </p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }

    /**
     * <p> Condition in the IAM policy that associates resources to an application.
     * </p>
     */
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }

    /**
     * <p> Condition in the IAM policy that associates resources to an application.
     * </p>
     */
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p> Condition in the IAM policy that associates resources to an application.
     * </p>
     */
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }

    /**
     * <p> Condition in the IAM policy that associates resources to an application.
     * </p>
     */
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }

    /**
     * <p> Condition in the IAM policy that associates resources to an application.
     * </p>
     */
    inline TagQueryConfiguration& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p> Condition in the IAM policy that associates resources to an application.
     * </p>
     */
    inline TagQueryConfiguration& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}

    /**
     * <p> Condition in the IAM policy that associates resources to an application.
     * </p>
     */
    inline TagQueryConfiguration& WithTagKey(const char* value) { SetTagKey(value); return *this;}

  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
