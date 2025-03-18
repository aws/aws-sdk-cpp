/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
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
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>An error or warning for the operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DashboardValidationMessage">AWS
   * API Reference</a></p>
   */
  class DashboardValidationMessage
  {
  public:
    AWS_CLOUDWATCH_API DashboardValidationMessage() = default;
    AWS_CLOUDWATCH_API DashboardValidationMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API DashboardValidationMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The data path related to the message.</p>
     */
    inline const Aws::String& GetDataPath() const { return m_dataPath; }
    inline bool DataPathHasBeenSet() const { return m_dataPathHasBeenSet; }
    template<typename DataPathT = Aws::String>
    void SetDataPath(DataPathT&& value) { m_dataPathHasBeenSet = true; m_dataPath = std::forward<DataPathT>(value); }
    template<typename DataPathT = Aws::String>
    DashboardValidationMessage& WithDataPath(DataPathT&& value) { SetDataPath(std::forward<DataPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing the error or warning.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DashboardValidationMessage& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataPath;
    bool m_dataPathHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
