/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SNS
{
namespace Model
{

  /**
   * <p>Platform application object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/PlatformApplication">AWS
   * API Reference</a></p>
   */
  class PlatformApplication
  {
  public:
    AWS_SNS_API PlatformApplication();
    AWS_SNS_API PlatformApplication(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SNS_API PlatformApplication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SNS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SNS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>PlatformApplicationArn for platform application object.</p>
     */
    inline const Aws::String& GetPlatformApplicationArn() const{ return m_platformApplicationArn; }
    inline bool PlatformApplicationArnHasBeenSet() const { return m_platformApplicationArnHasBeenSet; }
    inline void SetPlatformApplicationArn(const Aws::String& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = value; }
    inline void SetPlatformApplicationArn(Aws::String&& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = std::move(value); }
    inline void SetPlatformApplicationArn(const char* value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn.assign(value); }
    inline PlatformApplication& WithPlatformApplicationArn(const Aws::String& value) { SetPlatformApplicationArn(value); return *this;}
    inline PlatformApplication& WithPlatformApplicationArn(Aws::String&& value) { SetPlatformApplicationArn(std::move(value)); return *this;}
    inline PlatformApplication& WithPlatformApplicationArn(const char* value) { SetPlatformApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes for platform application object.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline PlatformApplication& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline PlatformApplication& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline PlatformApplication& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline PlatformApplication& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline PlatformApplication& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline PlatformApplication& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline PlatformApplication& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline PlatformApplication& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline PlatformApplication& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_platformApplicationArn;
    bool m_platformApplicationArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
