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
    AWS_CLOUDWATCH_API DashboardValidationMessage();
    AWS_CLOUDWATCH_API DashboardValidationMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API DashboardValidationMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The data path related to the message.</p>
     */
    inline const Aws::String& GetDataPath() const{ return m_dataPath; }

    /**
     * <p>The data path related to the message.</p>
     */
    inline bool DataPathHasBeenSet() const { return m_dataPathHasBeenSet; }

    /**
     * <p>The data path related to the message.</p>
     */
    inline void SetDataPath(const Aws::String& value) { m_dataPathHasBeenSet = true; m_dataPath = value; }

    /**
     * <p>The data path related to the message.</p>
     */
    inline void SetDataPath(Aws::String&& value) { m_dataPathHasBeenSet = true; m_dataPath = std::move(value); }

    /**
     * <p>The data path related to the message.</p>
     */
    inline void SetDataPath(const char* value) { m_dataPathHasBeenSet = true; m_dataPath.assign(value); }

    /**
     * <p>The data path related to the message.</p>
     */
    inline DashboardValidationMessage& WithDataPath(const Aws::String& value) { SetDataPath(value); return *this;}

    /**
     * <p>The data path related to the message.</p>
     */
    inline DashboardValidationMessage& WithDataPath(Aws::String&& value) { SetDataPath(std::move(value)); return *this;}

    /**
     * <p>The data path related to the message.</p>
     */
    inline DashboardValidationMessage& WithDataPath(const char* value) { SetDataPath(value); return *this;}


    /**
     * <p>A message describing the error or warning.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message describing the error or warning.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message describing the error or warning.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message describing the error or warning.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message describing the error or warning.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message describing the error or warning.</p>
     */
    inline DashboardValidationMessage& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message describing the error or warning.</p>
     */
    inline DashboardValidationMessage& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message describing the error or warning.</p>
     */
    inline DashboardValidationMessage& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_dataPath;
    bool m_dataPathHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
